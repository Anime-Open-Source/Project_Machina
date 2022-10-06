using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Weapon Stats", menuName = "Stats/Weapon Stats")]
public class WeaponStats : ScriptableObject
{
    [Header("Setup")]
    [SerializeField] private string _Name;
    [SerializeField] private float _Damage;
    [SerializeField] private float _Piercing;

    public string Name { get { return _Name; } private set { } }
    public float Damage { get { return _Damage;} private set { } }
    public float Piercing { get { return _Piercing;} private set { } }
}
