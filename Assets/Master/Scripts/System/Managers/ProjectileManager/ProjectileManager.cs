using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent(typeof(ObjectPool))]
public class ProjectileManager : SingletonGeneric<ProjectileManager>
{

    [Header("Setup")]
    [SerializeField] private GameObject _ProjectilePrefab;
    [SerializeField] private GameObject _ProjectileParent;
    [Header("Settings")]
    [SerializeField] private int _ProjectileCount;

    private ObjectPool _Pooler;

    private void Start()
    {
        _Pooler = GetComponent<ObjectPool>();
        _Pooler.PooledObject(_ProjectilePrefab, _ProjectileParent, _ProjectileCount);
    }

    public GameObject GetProjectile(Transform Caller)
    {
        GameObject c_Projectile;
        c_Projectile = _Pooler.GetObject(_ProjectilePrefab);

        if (c_Projectile == null)
            return null;

        c_Projectile.transform.position = Caller.position;
        c_Projectile.transform.rotation = Caller.rotation;

        return c_Projectile;
    }
}
