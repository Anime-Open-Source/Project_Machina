using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponBase : MonoBehaviour, IGrabable
{
    #region Inteface Implemetation
    public void Detached(GameObject Hand)
    {
        if (_IsGrabbed && _PrimaryHandTransform == Hand.transform)
        {
            _IsGrabbed = false;
            WeaponCollider.enabled = true;
            WeaponRigidbody.isKinematic = false;
            _PrimaryHandTransform = null;
        }
    }

    public void Grabed(GameObject Hand)
    {
        if (!_IsGrabbed)
        {
            _IsGrabbed = true;
            WeaponRigidbody.isKinematic = true;
            WeaponCollider.enabled = false;
            _PrimaryHandTransform = Hand.transform;
        }
        
    }
    #endregion

    [Header("Setup")]
    [Space(10)]
    [SerializeField] private WeaponStats _Stats;
    [Space(5)]
    [SerializeField] private Transform _PrimaryHandTransform;
    [SerializeField] private bool _IsGrabbed;
    [SerializeField] private Transform _GrabPoint;
    [Space(5)]
    [SerializeField] private Collider _WeaponCollider;
    [SerializeField] private Rigidbody _WeaponRigidbody;
    [Space(5)]
    [SerializeField] private SkillBase _Skill;
    [SerializeField] private SkillManager _SkillManager;
    

    public WeaponStats Stats { get { return _Stats; }private set { } }
    public Transform PrimaryHandTransform { get { return _PrimaryHandTransform; } private set { } }
    public bool IsGrabbed { get { return _IsGrabbed; } private set {} }
    public Transform GrabPoint { get { return _GrabPoint; } private set { } }
    public Collider WeaponCollider { get { return _WeaponCollider; } private set { } }
    public Rigidbody WeaponRigidbody { get { return _WeaponRigidbody; } private set { } }
    public SkillBase Skill { get { return _Skill; } private set { } }
    public SkillManager SkillManager { get { return _SkillManager; } private set { } }

}
