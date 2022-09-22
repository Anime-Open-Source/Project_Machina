using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
[RequireComponent(typeof(NavMeshAgent))]

public class RangedSpider : MonoBehaviour
{
    private GroupManager _GroupManager;
    private Transform _Target;
    private NavMeshAgent _Agent;
    private float _RangedDistance;
    private float _RetreateDistance;

    public GroupManager SetGroupManager { get { return _GroupManager; } set { _GroupManager = value; } }

    private void Start()
    {
        _Agent = GetComponent<NavMeshAgent>();
        _Target = _GroupManager.Player.transform;
        _RangedDistance = _GroupManager.RangedDistance;
        _Agent.SetDestination(_Target.position);
        _RetreateDistance = _RangedDistance / 2;
    }

    private void Update()
    {
        _Agent.SetDestination(_Target.position);
        if (Vector3.Distance(transform.position, _Target.position) <= _RangedDistance)
            _Agent.isStopped = true;

        if (Vector3.Distance(transform.position, _Target.position) <= _RetreateDistance)
        {
            _Agent.isStopped = false;
            _Agent.SetDestination(_GroupManager.transform.position);
        }
    }

}
