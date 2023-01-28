using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bow : WeaponBase
{
    [Space(10)]
    [SerializeField] private Transform _ProjectileSpawnPoint;

    [Header("Setting")]
    [SerializeField] private float _MinimalPull;
    [SerializeField] private float _Multiplier;
    [SerializeField] private float _SmoothTime;
    //Temporary solution

    private GameObject _PojectileObject;
    private Projectile _Projectile;

    public float SmoothTime { get { return _SmoothTime; } private set {} }
    public float MinimalPull { get { return _MinimalPull; } private set { } }

    public void Shoot(float LaunchPower)
    {
        Vector3 c_Forward = transform.forward + transform.position;
        Vector3 c_GroundForward = new Vector3(c_Forward.x, transform.position.y, c_Forward.z);
        float c_LaunchAngle = Vector3.Angle(c_Forward, c_GroundForward);

        // TODO : [MERGE GetProjectile]
        //_PojectileObject = ProjectileManager.Instance.GetProjectile(transform);

        _Projectile = _PojectileObject.GetComponent<Projectile>();
        _Projectile.AssignParameter(LaunchPower * _Multiplier, c_LaunchAngle);

    }

}
