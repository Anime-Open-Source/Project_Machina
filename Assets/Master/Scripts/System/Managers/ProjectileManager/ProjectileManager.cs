using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent(typeof(ObjectPool))]
public class ProjectileManager : SingletonGeneric<ProjectileManager>
{

    [Header("Setup")]
    [SerializeField] private GameObject[] _ProjectilePrefabs;
    [SerializeField] private GameObject _ProjectileParent;
    [Header("Settings")]
    [SerializeField] private int _ProjectileCount;

    private ObjectPool _Pool;

    private void Start()
    {
        _Pool = GetComponent<ObjectPool>();
        _Pool.PoolObject(_ProjectilePrefabs, _ProjectileParent, _ProjectileCount);
    }

    public GameObject GetProjectile(Transform Caller, GameObject ProjectilePrefabs)
    {
        GameObject c_Projectile;
        c_Projectile = _Pool.GetObject(ProjectilePrefabs);

        if (c_Projectile == null)
            return null;

        c_Projectile.transform.position = Caller.position;
        c_Projectile.transform.rotation = Caller.rotation;

        return c_Projectile;
    }
}
