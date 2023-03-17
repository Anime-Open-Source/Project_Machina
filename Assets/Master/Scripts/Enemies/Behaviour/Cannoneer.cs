using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Events;

[RequireComponent(typeof(NavMeshAgent))]

public class Cannoneer : EnemyBase
{

    [Header("Setup")]
    [SerializeField] private Transform _ProjectileSpawnPoint;
    [SerializeField] private GameObject _ProjectilePrefab;
    [Header("Settings")]
    [SerializeField] private float _CooldownTime;
    [SerializeField] private float _LaunchPower;
    [SerializeField] private float _LaunchHeight;
    [SerializeField] private float _LaunchAngel;
    [Header("Events")]
    [Space(5)]
    public UnityEvent OnEnemyShoot;

    private float _CurrentTime;

    private Transform _Target;

    private NavMeshAgent _Agent;

    private float _RangedDistance;

    private bool _CanShoot;

    private GameObject _ProjectileObject;
    private Projectile _Projectile;

    private void Update()
    {

        if (!IsInRange())
            return;

        if (_CanShoot)
        {
            ShootTarget(_Target);
            _CanShoot = false;
        }

        if (_CurrentTime > 0f)
        {
            _CurrentTime -= Time.deltaTime;
            return;
        }

        if (!_Agent.isStopped)
            return;

        _CanShoot = true;
        _CurrentTime = _CooldownTime;

    }

    private void ShootTarget(Transform Target)
    {

        LockAtTarget(Target);

        EnemyAnimator.SetTrigger("Attack");

        Target.gameObject.GetComponent<Player>().DoDamage(Stats.Damage, Stats.Piercing);

        _CurrentTime = _CooldownTime;
    }

    public void SpawnProjectile()
    {
        _ProjectileObject = ProjectileManager.Instance.GetProjectile(transform, _ProjectilePrefab);
        _ProjectileObject.transform.position = _ProjectileSpawnPoint.position;

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

    private bool IsInRange()
    {
        if (Vector3.Distance(transform.position, _Target.position) <= _RangedDistance)
            return true;

        return false;
    }

    public override void Init()
    {
        _Agent = GetComponent<NavMeshAgent>();
        _Target = MGroupManager.Player.transform;
        _RangedDistance = MGroupManager.RangedDistance;
        _CooldownTime = Stats.AttackSpeed;
        GetComponent<Collider>().enabled = true;
    }

    private void OnDisable()
    {
        if (!_Agent)
            return;

        _Agent.isStopped = true;

        //MGroupManager.RemoveFromActiveUnits(this.gameObject);
    }

    private void OnEnable()
    {

        if (!_Agent)
            return;

        _Agent.isStopped = false;
        _Agent.SetDestination(_Target.position);
    }

}
