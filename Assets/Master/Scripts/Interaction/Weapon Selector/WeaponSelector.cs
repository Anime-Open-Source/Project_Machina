using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class WeaponSelector : MonoBehaviour
{
    [Header("Setup")]
    [Space(5)]
    [SerializeField] private Transform _ParentHandTransform;
    [SerializeField] private Transform _WeaponSpawnPoint;
    [SerializeField] private List<GameObject> _WeaponsPrefabs = new List<GameObject>();

    public void SelectWeapon(GameObject WeaponName)
    {
        GameObject c_Weapons;
        c_Weapons = WeaponManager.Instance.GetWeapons(WeaponName, transform);
        c_Weapons.transform.position = _WeaponSpawnPoint.position;
        c_Weapons.transform.rotation = _WeaponSpawnPoint.rotation;
    }
}
