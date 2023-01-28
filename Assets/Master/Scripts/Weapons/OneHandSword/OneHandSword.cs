using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OneHandSword : WeaponBase
{
    [Space(10)]
    [Header("Setting")]
    [Tooltip("How fast the player need to swing to count as an attack")]
    [SerializeField]private float _MinimalSwingSpeed;
    [SerializeField] private bool _IsCharged;
    [SerializeField] private GameObject _Blade;
    [SerializeField] private Collider _BladeCollider;

    [SerializeField]private Vector3 _Offsets;

    private Vector3 _PreviosPos;

    private void Start()
    {
        p_ForwardCorrectionOffsets = _Offsets;
    }

    private void Update()
    {
        WeaponMovement();

        if (CalculateSwingSpeed())
            _BladeCollider.enabled = true;
        else
            _BladeCollider.enabled = false;

    }

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
