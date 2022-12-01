using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
[RequireComponent(typeof(NavMeshAgent))]

public class Cannoneer : EnemyBase
{

    [Header("Setup")]
    [SerializeField] private Transform _ProjectileSpawnPoint;
    [Header("Settings")]
    [SerializeField] private float _LaunchPower;
    [SerializeField] private float _LaunchHeight;
    [SerializeField] private float _LaunchAngel;

    private GroupManager _GroupManager;

    private Transform _Target;

    private NavMeshAgent _Agent;

    private float _RangedDistance;
    private float _RetreateDistance;

    private bool _CanShoot;

    private GameObject _ProjectileObject;
    private Projectile _Projectile;

    public GroupManager SetGroupManager { get { return _GroupManager; } set { _GroupManager = value; } }

    private void Start()
    {
       Init();
    }

    private void Update()
    {
        Movement();

        if (_CanShoot)
        {
            ShootTarget(_Target);
        }


    }

    private void ShootTarget(Transform Target)
    {

        LockAtTarget(Target);

        _ProjectileObject = ProjectileManager.Instance.GetProjectile(transform);
        _Projectile = _ProjectileObject.GetComponent<Projectile>();

        _Projectile.AssignParameter(_LaunchPower, _LaunchAngel);
    }

    private void LockAtTarget(Transform Target)
    {
        if (Target == transform)
            return;

        Vector3 c_TargetDirecetion = Target.position - transform.position;

        transform.rotation = Quaternion.LookRotation(c_TargetDirecetion);

    }


    private void Movement()
    {
        _Agent.SetDestination(_Target.position);

        if (IsInRange())
        {
            _Agent.isStopped = true;
            _CanShoot = true;
            return;
        }

        _CanShoot = false;

        if (Vector3.Distance(transform.position, _Target.position) <= _RetreateDistance)
        {
            _Agent.isStopped = false;
            _Agent.SetDestination(_GroupManager.transform.position);
            return;
        }
    }

    private bool IsInRange()
    {
        if (Vector3.Distance(transform.position, _Target.position) <= _RangedDistance)
            return true;

        return false;
    }

    private void Init()
    {
        _Agent = GetComponent<NavMeshAgent>();
        _Target = _GroupManager.Player.transform;
        _RangedDistance = _GroupManager.RangedDistance;
        _Agent.SetDestination(_Target.position);
        _RetreateDistance = _RangedDistance / 2;
    }

    private void OnDisable()
    {
        if (!_Agent)
            return;

        _Agent.isStopped = true;
    }

    private void OnEnable()
    {

        if (!_Agent)
            return;

        _Agent.isStopped = false;
        _Agent.SetDestination(_Target.position);
    }

}
