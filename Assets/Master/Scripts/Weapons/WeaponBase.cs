using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponBase : MonoBehaviour
{

    public enum WeaponType
    {
        None , Bow, Crossbow, MagicRifle, TwoHandSword, OneHandSword
    }

    [Header("Setup")]
    [Space(10)]
    [SerializeField] private WeaponStats _Stats;
    [Space(5)]
    [SerializeField] private Transform _PrimaryHandTransform;
    [SerializeField] private Transform _SecondaryHandTransform;
    [Space(5)]
    [SerializeField] private WeaponType _WeaponType;
    [SerializeField] private bool _ForwardCorrection;
    [SerializeField] private Transform _PrimaryGrabPoint;
    [SerializeField] private Transform _SecondaryGrabPoint;
    [SerializeField] private GameObject _Model;
    [Space(5)]
    [SerializeField] private SkillBase _Skill;
    [SerializeField] private SkillManager _SkillManager;

    private bool _PrimaryGrabbed;
    private bool _SecondaryGrabbed;

    protected Vector3 p_ForwardCorrectionOffsets;

    public WeaponStats Stats { get { return _Stats; }private set { } }
    public Transform PrimaryGrabPoint { get { return _PrimaryGrabPoint; } private set { } }
    public Transform SecondaryGrabPoint { get { return _SecondaryGrabPoint; } private set { } }
    public SkillBase Skill { get { return _Skill; } private set { } }
    public SkillManager SkillManager { get { return _SkillManager; } private set { } }

    private void Update()
    {


        WeaponMovement();


    }

    protected void WeaponMovement()
    {
        if (!_PrimaryGrabbed)
            return;

        transform.position = _PrimaryGrabPoint.position;


        if (_ForwardCorrection)
        {
            transform.rotation = Quaternion.Euler(_PrimaryGrabPoint.rotation.eulerAngles + p_ForwardCorrectionOffsets);
            return;
        }

        if (!IsTwoHanded() || !IsBothHand())
        {
            transform.rotation = _PrimaryGrabPoint.rotation;
            return;
        }



        transform.up = (_PrimaryGrabPoint.position - _SecondaryGrabPoint.position);
    }

    public void OnGrabbed(Transform GrabTransform)
    {

        if (!IsTwoHanded())
        {
            _PrimaryGrabbed = true;
            return;
        }

        if (GrabTransform != _PrimaryGrabPoint)
        {
            _SecondaryGrabbed = true;
            return;
        }

        _PrimaryGrabbed = true;
        _SecondaryGrabPoint.gameObject.SetActive(true);
        
    }

    public void OnDetached(Transform GrabTransform)
    {
        if (!IsTwoHanded())
        {
            _PrimaryGrabbed = false;
            return;
        }

        if (GrabTransform != _PrimaryGrabPoint)
        {
            _SecondaryGrabbed = false;
            return;
        }

        _PrimaryGrabbed = false;
        _SecondaryGrabPoint.gameObject.SetActive(false);
    }

    private bool IsBothHand()
    {

        switch (_WeaponType)
        {
            case WeaponType.None:
                break;

            case WeaponType.Bow:
                //if (_PrimaryGrabbed && _SecondaryGrabbed)
                //{
                //    return true;
                //}
                break;

            case WeaponType.Crossbow:
                if (_PrimaryGrabbed && _SecondaryGrabbed)
                {
                    return true;
                }
                break;

            case WeaponType.MagicRifle:
                if (_PrimaryGrabbed && _SecondaryGrabbed)
                {
                    return true;
                }
                break;

            case WeaponType.TwoHandSword:
                if (_PrimaryGrabbed && _SecondaryGrabbed)
                {
                    return true;
                }
                break;

            case WeaponType.OneHandSword:
                break;
            default:
                break;
        }
        return false;
    }

    private bool IsTwoHanded()
    {

        switch (_WeaponType)
        {
            case WeaponType.None:
                break;
            case WeaponType.Bow:
                return true;
                break;
            case WeaponType.Crossbow:
                return true;
                break;
            case WeaponType.MagicRifle:
                return true;
                break;
            case WeaponType.TwoHandSword:
                return true;
                break;
            case WeaponType.OneHandSword:
                break;
            default:
                break;
        }

        return false;
    }

    private void OnDrawGizmos()
    {
        Gizmos.DrawLine(transform.position, transform.position + transform.forward);
        Gizmos.DrawLine(transform.position, transform.position + transform.up);
    }

}
