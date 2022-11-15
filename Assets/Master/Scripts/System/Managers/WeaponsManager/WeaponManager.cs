using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponManager : SingletonGeneric<WeaponManager>
{
    [Header("Lists")]
    [Space(10)]
    [SerializeField] private List<GameObject> WeaponPrefabs = new List<GameObject>();
    
    
    private GameObject[] _PooledWeapons;


    private void Start()
    {
        SpawnWeapon();
    }

    #region Spawn Weapon
    private void SpawnWeapon()
    {
        int c_ArrayLength = WeaponPrefabs.Count;
        _PooledWeapons = new GameObject[c_ArrayLength];

        GameObject c_Weapon;

        for (int i = 0; i < WeaponPrefabs.Count; i++)
        {
            c_Weapon = Instantiate(WeaponPrefabs[i], transform.position, transform.rotation);
            c_Weapon.SetActive(false);
            _PooledWeapons[i] = c_Weapon;
        }

    }
    #endregion

    private void Clear()
    {
        for (int i = 0; i < _PooledWeapons.Length; i++)
        {
            _PooledWeapons[i].SetActive(false);

        }
    }

    public GameObject GetWeapons(GameObject WeaponsPrefabs)
    {

        Clear();

        for (int i = 0; i < _PooledWeapons.Length; i++)
        {
            if (!_PooledWeapons[i].activeInHierarchy && WeaponPrefabs[i] == WeaponsPrefabs)
            {
                _PooledWeapons[i].SetActive(true);
                return _PooledWeapons[i];
            }

        }

        return null;

    }
}

