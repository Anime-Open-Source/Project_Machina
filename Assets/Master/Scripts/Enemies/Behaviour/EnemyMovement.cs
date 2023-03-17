using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(EnemyBase))]

public class EnemyMovement : MonoBehaviour
{

    [SerializeField] private EnemyBase m_enemyBase;
    [SerializeField] private Animator m_animator;

    //Retreat distance for range unit
    private float _retreateDistance;

    private float _stopDistance;

    private Transform _playerTransfrom;

    private NavMeshAgent _navMeshAgent;

    private bool _isRetreat;

    private void Start()
    {
        Innit();
    }

    private void Innit()
    {

        _navMeshAgent = GetComponent<NavMeshAgent>();

        _playerTransfrom = m_enemyBase.MGroupManager.Player.transform;

        _navMeshAgent.SetDestination(_playerTransfrom.position);

        _navMeshAgent.speed = m_enemyBase.Stats.MovementSpeed;

        switch (m_enemyBase.Type)
        {
            case EnemyBase.UnitType.None:
                break;
            case EnemyBase.UnitType.Ranged:
                _retreateDistance = m_enemyBase.MGroupManager.RangedDistance / 2f;
                _stopDistance = m_enemyBase.MGroupManager.RangedDistance;
                break;
            case EnemyBase.UnitType.Melee:
                _retreateDistance = 0f;
                _stopDistance = m_enemyBase.MGroupManager.StopDistance;
                break;
            default:
                break;
        }

       

        

        
    }

    private void Update()
    {

        if (m_animator.GetBool("IsDead"))
        {
            _navMeshAgent.isStopped = true;
            return;
        }


        if (!_navMeshAgent.isStopped)
        {
            m_animator.SetBool("IsWalking", true);
        }
        
        if(Vector3.Distance(transform.position, _playerTransfrom.position) > _stopDistance)
        {
            _navMeshAgent.isStopped = false;
            _navMeshAgent.SetDestination(_playerTransfrom.position);
        }
            

        RetreatAtDistance(_retreateDistance);

        if (_isRetreat)
            return;

        
        StopAtDistance(_stopDistance);

    }

    private void RetreatAtDistance(float distance)
    {

        if (Vector3.Distance(transform.position, _playerTransfrom.position) >= distance * 2)
        {
            _isRetreat = false;
            return;
        }

        if (Vector3.Distance(transform.position, _playerTransfrom.position) >= distance)
            return;

        
            

        _navMeshAgent.isStopped = false;
        _isRetreat = true;
        _navMeshAgent.SetDestination(transform.position + (transform.position - transform.forward));

    }
    private void StopAtDistance(float distance)
    {
        if (Vector3.Distance(transform.position, _playerTransfrom.position) > distance)
            return;

        _navMeshAgent.isStopped = true;
        m_animator.SetBool("IsWalking", false);
    }

    private void OnDisable()
    {
        if (!_navMeshAgent)
            return;

        _navMeshAgent.isStopped = true;
    }

    private void OnEnable()
    {

        if (!_navMeshAgent)
            return;

        _navMeshAgent.isStopped = false;

    }

}
