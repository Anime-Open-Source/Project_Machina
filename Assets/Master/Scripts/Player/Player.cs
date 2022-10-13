using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Player : MonoBehaviour, IDamageable
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

    [SerializeField] private PlayerStats _Stats;
    [SerializeField] private UnityEvent<Vector3> _OnHitEvent;
    [SerializeField] private UnityEvent<Vector3> _OnDieEvent;

    private void Die()
    {
        _OnDieEvent.Invoke(transform.position);
    }

    private void Awake()
    {
        _Stats = Instantiate(_Stats);
    }
}
