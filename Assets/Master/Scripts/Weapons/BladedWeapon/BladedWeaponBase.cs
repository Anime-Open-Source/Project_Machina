using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BladedWeaponBase : WeaponBase
{
    [Space(5)]
    [Header("Setting")]
    [Tooltip("How fast the player need to swing to count as an attack")]
    [SerializeField] private float _MinimalSwingSpeed;
    [SerializeField] private bool _IsCharged;
    [SerializeField] private GameObject _Blade;
    [SerializeField] private Collider _BladeCollider;

    private Vector3 _PreviosPos;

    private bool CalculateSwingSpeed()
    {
        float SwingSpeed;
        SwingSpeed = ((transform.position - _PreviosPos).magnitude / Time.deltaTime);
        _PreviosPos = transform.position;

        Debug.Log(SwingSpeed);

        return SwingSpeed > _MinimalSwingSpeed;

    }

    public void HitEnemy(IDamageable Target)
    {
        Target.DoDamage(Stats.Damage, Stats.Piercing);
        Debug.Log("Hit");
    }
}
