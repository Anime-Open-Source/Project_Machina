using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class EntityStats
{
    public string Name;
    public float Health;
    public float MaxHealth;
    public float Attack;
    public float Piercing;
    public float Defense;
    public float AttackSpeed;
    public float MovementSpeed;

    public EntityStats(string name, float maxHealth, float attack, float piercing, float defense, float attackSpeed, float movementSpeed)
    {
      Name = name;
      Health = maxHealth;
      MaxHealth = maxHealth;
      Attack = attack;
      Piercing = piercing;
      Defense = defense;
      AttackSpeed = attackSpeed;
      MovementSpeed = movementSpeed;
    }

}
