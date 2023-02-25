using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public struct Projectiles
{
    public GameObject Prefab;
    public GameObject Parent;
    public int Count;
}


[RequireComponent(typeof(ObjectPool))]

public class ProjectileManager : SingletonGeneric<ProjectileManager>
{

    [Header("Setup")]
    //[SerializeField] private GameObject[] _ProjectilePrefabs;
    [SerializeField] private Projectiles[] _Projectiles;
    [Space(10f)]
    [SerializeField] private GameObject _ProjectileParent;
    [Header("Settings")]
    [SerializeField] private int _ProjectileCount;

    private ObjectPool _Pool;

    private GameObject[] _ProjectilePrefabs;

    private void Start()
    {
        _Pool = GetComponent<ObjectPool>();

        foreach (Projectiles projectile in _Projectiles)
        {
            _Pool.PoolObject(projectile.Prefab, projectile.Parent, projectile.Count);
        }

        
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
