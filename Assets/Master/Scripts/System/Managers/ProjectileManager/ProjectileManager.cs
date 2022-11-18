using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileManager : SingletonGeneric<ProjectileManager>
{
    [Header("Setup")]
    [Space(10)]
    [SerializeField] private GameObject _ProjectilePrefab;
    [Header("Settings")]
    [Space(10)]
    [Min(1)]
    [SerializeField] private int _TotalProjectile;

    private GameObject[] _PooledProjectile;

    private void Awake()
    {
        SpawnProjectile();
    }

    private void SpawnProjectile()
    {
        _PooledProjectile = new GameObject[_TotalProjectile];
        GameObject c_Projectile;

        for (int i = 0; i < _TotalProjectile; i++)
        {
            c_Projectile = Instantiate(_ProjectilePrefab, transform.position, Quaternion.identity);
            c_Projectile.SetActive(false);
            _PooledProjectile[i] = c_Projectile;
        }
    }

    public GameObject GetProjectile()
    {
        for (int i = 0; i < _PooledProjectile.Length; i++)
        {
            if (!_PooledProjectile[i].activeInHierarchy)
            {
                _PooledProjectile[i].SetActive(true);
                return _PooledProjectile[i];
            }

        }

        return null;
    }

}
