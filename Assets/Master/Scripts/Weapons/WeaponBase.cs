using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponBase : MonoBehaviour /*,IGrabable*/
{

    [Header("Setup")]
    [Space(10)]
    [SerializeField] private WeaponStats _Stats;
    [Space(5)]
    [SerializeField] private Transform _PrimaryHandTransform;
    [SerializeField] private Transform _SecondaryHandTransform;
    [Space(5)]
    [SerializeField] private bool _IsGrabbed;
    [SerializeField] private bool _IsTwoHanded;
    [SerializeField] private bool _ForwardCorrection;
    [SerializeField] private Transform _PrimaryGrabPoint;
    [SerializeField] private Transform _SecondaryGrabPoint;
    [SerializeField] private GameObject _Model;
    [Space(5)]
    [SerializeField] private SkillBase _Skill;
    [SerializeField] private SkillManager _SkillManager;

    private bool _PrimaryGrabbed;
    private bool _SecondaryGrabbed;
    


    public WeaponStats Stats { get { return _Stats; }private set { } }
    public Transform PrimaryHandTransform { get { return _PrimaryHandTransform; } private set { } }
    public bool IsGrabbed { get { return _IsGrabbed; } private set { } }
    public bool IsTwoHanded { get { return _IsTwoHanded; } private set {} }
    public Transform PrimaryGrabPoint { get { return _PrimaryGrabPoint; } private set { } }
    public Transform SecondaryGrabPoint { get { return _SecondaryGrabPoint; } private set { } }
    public SkillBase Skill { get { return _Skill; } private set { } }
    public SkillManager SkillManager { get { return _SkillManager; } private set { } }

    private void Update()
    {
        if (!_PrimaryGrabbed)
        {
            _SecondaryGrabPoint.gameObject.SetActive(false);
            return;
        }
        else
            _SecondaryGrabPoint.gameObject.SetActive(true);

        transform.position = _PrimaryGrabPoint.position;

        if (IsBothHand())
        {
            transform.up = (_PrimaryGrabPoint.position - _SecondaryGrabPoint.position);

        }
        else if (!_ForwardCorrection)
            transform.rotation = _PrimaryGrabPoint.rotation;
        else if (_ForwardCorrection)
            transform.up = _PrimaryGrabPoint.forward;


    }

    public void OnGrabbed(Transform GrabTransform)
    {
        if (GrabTransform == _PrimaryGrabPoint)
        {
            _PrimaryGrabbed = true;
        }
        else
        {
            _SecondaryGrabbed = true;
        }
    }

    public void OnDetached(Transform GrabTransform)
    {
        if (GrabTransform == _PrimaryGrabPoint)
        {
            _PrimaryGrabbed = false;
        }
        else
        {
            _SecondaryGrabbed = false;
        }
    }

    private bool IsBothHand()
    {
        if (_IsTwoHanded)
        {
            if (_PrimaryGrabbed && _SecondaryGrabbed)
            {
                return true;
            }
        }
        return false;
    }


    private void OnDrawGizmos()
    {
        Gizmos.DrawLine(transform.position, transform.position + transform.forward);
        Gizmos.DrawLine(transform.position, transform.position + transform.up);
    }

}
