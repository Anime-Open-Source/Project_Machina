using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
[RequireComponent(typeof(NavMeshAgent))]

public class Crawler : EnemyBase
{
    private GameObject _Player;
    private GameObject[] _Units;
    private Vector3 _Total;
    private Vector3 _Center;
    private Vector3 _Offests;
    private NavMeshAgent _Agent;

    private float _ColldownTime;

    private float _CurrentTime;

    private bool _CanAttack = true;

    public override void Init()
    {
        _Units = MGroupManager.Units.ToArray();
        _Agent = GetComponent<NavMeshAgent>();
        _Player = MGroupManager.Player;
        _ColldownTime = Stats.AttackSpeed;
        GetComponent<Collider>().enabled = true;
    }

    private void Update()
    {

        if (_CurrentTime <= 0f)
            _CanAttack = true;

        if(!EnemyAudioSource.isPlaying)
            EnemyAudioSource.Play();

        if (!_Agent.isStopped)
            return;

        if (!_CanAttack)
        {
            _CurrentTime -= Time.deltaTime;
            return;
        }

        AttackTarget(_Player);
        _CurrentTime = _ColldownTime;

    }

    private void FindOffsets()
    {
        foreach (var unit in _Units)
        {
            _Total += unit.transform.position;
        }

        _Center = _Total / _Units.Length;

        _Offests = _Center - transform.position;
        _Player.transform.position += _Offests;
   

    }

    public override void AttackTarget(GameObject Target)
    {
        Target.GetComponent<IDamageable>().DoDamage(Stats.Damage, Stats.Piercing);
        EnemyAnimator.SetTrigger("Attack");
        _CanAttack = false;
    }


    

}
