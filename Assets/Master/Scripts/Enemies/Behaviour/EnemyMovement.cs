using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(EnemyBase))]

public class EnemyMovement : MonoBehaviour
{
    [SerializeField] private EnemyBase m_enemyBase;

    //Retreat distance for range unit
    private float _retreateDistance;

    private float _stopDistance;

    private Transform _playerTransfrom;

    private NavMeshAgent _navMeshAgent;

    private void Start()
    {
        Innit();
    }

    private void Innit()
    {

        _navMeshAgent = GetComponent<NavMeshAgent>();

        _retreateDistance = m_enemyBase.MGroupManager.RangedDistance / 2f;

        _stopDistance = m_enemyBase.MGroupManager.StopDistance;

        _playerTransfrom = m_enemyBase.MGroupManager.Player.transform;

        _navMeshAgent.destination = _playerTransfrom.position;
    }

    private void Update()
    {
        if(m_enemyBase.Type == EnemyBase.UnitType.Ranged)
        {

            RetreatAtDistance(_retreateDistance);
            return;

        }
            
        StopAtDistance(_stopDistance);

    }

    private void RetreatAtDistance(float distance)
    {
        if(Vector3.Distance(transform.position, _playerTransfrom.position) > distance * 2f)
        {
            return;
        }

        if (Vector3.Distance(transform.position, _playerTransfrom.position) > distance)
            return;

        _navMeshAgent.isStopped = false;

        _navMeshAgent.destination = transform.position + (transform.position - _playerTransfrom.position);

    }
    private void StopAtDistance(float distance)
    {
        if (Vector3.Distance(transform.position, _playerTransfrom.position) > distance)
            return;

        _navMeshAgent.isStopped = true;
    }

}
