using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
[RequireComponent(typeof(NavMeshAgent))]

public class Crawler : EnemyBase
{
    private GroupManager _GroupManager;
    private Vector3 _PlayerDirection;
    private GameObject[] _Units;
    private Vector3 _Total;
    private Vector3 _Center;
    private Vector3 _Offests;
    private NavMeshAgent _Agent;

    public GroupManager SetGroupManager { get { return _GroupManager; } set { _GroupManager = value; } }

    private void Start()
    {
        _Units = _GroupManager.Units;
        _Agent = GetComponent<NavMeshAgent>();
        _PlayerDirection = _GroupManager.Player.transform.position;
        //FindOffsets();
        _Agent.SetDestination(_PlayerDirection);
    }

    private void Update()
    {
        
        if (Vector3.Distance(transform.position, _PlayerDirection) <= _GroupManager.StopDistance)
            _Agent.isStopped = true;

    }

    private void FindOffsets()
    {
        foreach (var unit in _Units)
        {
            _Total += unit.transform.position;
        }

        _Center = _Total / _Units.Length;

        _Offests = _Center - transform.position;
        _PlayerDirection += _Offests;
   

    }


}
