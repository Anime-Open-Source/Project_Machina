using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Player Stats", menuName = "Stats/Player Stats")]
public class PlayerStats : ScriptableObject
{
    #region Config
    [SerializeField] private string _Name;
    [Space(15)]
    [SerializeField] private float _Health;
    [SerializeField] private float _MaxHealth;
    [SerializeField] private float _Defense;
    [Space(15)]
    [SerializeField] private float _AttackSpeed;
    [SerializeField] private float _Damage;
    [SerializeField] private float _Piercing;
    #endregion

    public string Name { get { return _Name; } private set { } }
    public float Health { get { return _Health; } set { _Health = value; } }
    public float MaxHealth { get { return _MaxHealth; } private set { } }
    public float Defense { get { return _Defense; } private set { } }
    public float AttackSpeed { get { return _AttackSpeed; } private set { } }
    public float Damage { get { return _Damage; } private set { } }
    public float Piercing { get { return _Piercing; } private set { } }
}
