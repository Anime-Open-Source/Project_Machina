using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestDamager : MonoBehaviour
{
    [SerializeField] private GameObject _Target;
    [SerializeField] private float _Damage;
    [SerializeField] private float _Piercing;
    [SerializeField] private bool _Attack;

    private IDamageable _Damageable;

    private void Start()
    {
        _Damageable = _Target.GetComponent<IDamageable>();
    }

    private void Update()
    {
        if (_Attack)
        {
            _Damageable.DoDamage(_Damage, _Piercing);
            _Attack = false;
        }
    }
}
