using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent(typeof(ObjectPool))]

public class WeaponManager : SingletonGeneric<WeaponManager>
{
    [Header("Lists")]
    [Space(10)]
    [SerializeField] private GameObject[] WeaponsPrefabs;
    [Header("Setup")]
    [SerializeField] private GameObject _WeaponsParent;
    [Header("Settings")]
    [SerializeField] private int _PoolCount;

    private ObjectPool _Pool;



    private void Start()
    {
        _Pool = GetComponent<ObjectPool>();
        _Pool.PoolObject(WeaponsPrefabs, _WeaponsParent, _PoolCount);
    }

    public GameObject GetWeapons(GameObject WeaponPrefab, Transform Caller)
    {
        GameObject c_Weapon;
        c_Weapon = _Pool.GetObject(WeaponPrefab);

        if (!c_Weapon)
            return null;

        c_Weapon.transform.position = Caller.transform.position;
        c_Weapon.transform.rotation = Caller.transform.rotation;

        return c_Weapon;

    }
}

