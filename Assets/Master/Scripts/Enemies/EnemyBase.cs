using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EnemyBase : MonoBehaviour, IDamageable
{
    #region Interface Implementation
    public void DoDamage(float Damage, float Piercing)
    {
        float c_Defense = _Stats.Defense; ;
        float c_Damage = Damage;
        float c_Piercing = Piercing;

        if (_Stats.Health > 0f)
        {
            if (c_Piercing < 0f)
                c_Piercing = 0f;

            c_Defense -= Piercing;

            if (c_Defense <= 0f)
                c_Defense = 0f;

            c_Damage -= c_Defense;

            if (c_Damage <= 0)
                c_Damage = 0;

            _Stats.Health -= c_Damage;

            _OnHitEvent.Invoke(transform.position);
        }
        else
            Die();
    }
    #endregion


    [Header("Setup")]
    [SerializeField] private EnemyStats _StatsSO;
    [SerializeField] private Animator _Animator;
    [SerializeField] private UnityEvent<Vector3> _OnHitEvent;
    [SerializeField] private UnityEvent<Vector3> _OnDieEvent;

    private EnemyStats _Stats;

    private void Awake()
    {
        _Stats = Instantiate(_StatsSO);
    }

    public EnemyStats Stats { get { return _Stats; } private set { } }

    public virtual void AttackTarget(GameObject Target) { }
    private void Die() 
    {
        Debug.Log("Dead");
        _OnDieEvent.Invoke(transform.position);
    }

}
