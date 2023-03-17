using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Events;

public class SelectorButtonManager : MonoBehaviour
{
    [Header("Setup")]
    [SerializeField] private InputActionAsset _VRActionAssets;
    [SerializeField] private GameObject _Needle;
    [Header("Lists")]
    [SerializeField] private SelectorButton[] _SelectorButtons;
    
    [Header("Settings")]
    [SerializeField] private bool _UseAnimation;
    [Min(0f)]
    [SerializeField] private float _MinRadius, _Radius, _MaxRadius;
    [SerializeField] private float _ErrorMargin;
    [SerializeField] private float _HoverZoom;

    private Vector3[] _SelectorButtonPositions;

    private SelectorButton _SelectedButton;

    private InputAction _VRJoystickAction;
    private float _Degrees;

    private Vector3 _NeedleDefaultForward;

    Vector2 _joyStickDir;

    private void Start()
    {
        Innit();
        CalculateButtonOffsets();
    }

    private void Innit()
    {
        if (!_VRActionAssets)
       {
            Debug.LogError(string.Format("Cannot find Action Asset in {0}", this.name));
            Debug.Break();
            return;
        }

        _VRActionAssets.Enable();

        _VRJoystickAction = _VRActionAssets.FindAction("JoystickMove");

        if (_VRJoystickAction == null)
        {
            Debug.LogError(string.Format("Cannot find Action in Action Asset in {0}", this.name));
            Debug.Break();
            return;
        }

        _VRJoystickAction.performed += SelectWeapon;
        _VRJoystickAction.canceled += SelectWeapon;

        _NeedleDefaultForward = _Needle.transform.forward;

    }

    private void SelectWeapon(InputAction.CallbackContext context)
    {

       

        if (context.canceled)
        {
            _SelectedButton = HoverOnButton();
            _SelectedButton.OnSelectWeapon.Invoke();
            ResetButton();
            return;
        }

        _joyStickDir = _VRJoystickAction.ReadValue<Vector2>();
        RotateNeadel(_joyStickDir);
        HoverOnButton();
    }

    private void CalculateButtonOffsets()
    {
        _SelectorButtonPositions = new Vector3[_SelectorButtons.Length];

        for (int i = 0; i < _SelectorButtons.Length; i++)
        {

            float c_Const = 360f;


            float SinX = Mathf.Sin(_Degrees * Mathf.Deg2Rad) * _Radius;
            float CosZ = Mathf.Cos(_Degrees * Mathf.Deg2Rad) * _Radius;

            Vector3 _ButtomOffsets = new Vector3(SinX, 0f, CosZ);

            Vector3 c_GlobalTranslate = transform.TransformPoint(_ButtomOffsets);

            _SelectorButtons[i].transform.position = c_GlobalTranslate;
            Vector3 c_Look = transform.position - c_GlobalTranslate;
            _SelectorButtons[i].transform.rotation = Quaternion.LookRotation(c_Look, transform.up);

            _SelectorButtonPositions[i] = c_Look;

            _Degrees += c_Const / _SelectorButtons.Length;


        }
    }

    /// <summary>
    /// Find Button that currently being hoverd, return that button
    /// </summary>
    private SelectorButton HoverOnButton()
    {

        for (int i = 0; i < _SelectorButtonPositions.Length; i++)
        {
            float c_dotProduct = Vector3.Dot(_SelectorButtonPositions[i], _joyStickDir.normalized);


            Debug.Log(string.Format("Dot between {0} and {1} is {2}", _SelectorButtonPositions[i], _joyStickDir.normalized, c_dotProduct));
            if (c_dotProduct! > -_ErrorMargin)
            {
                _SelectorButtons[i].ResetScale();
                continue;
            }

            _SelectorButtons[i].Hover(_SelectorButtons[i].defaultZoom * _HoverZoom);
            //RotateNeadel(_SelectorButtonPositions[i]);
            return _SelectorButtons[i];
        }

        return null;
    }

    private void RotateNeadel(Vector3 buttonPosition)
    {
        float c_needleAngle = Vector3.SignedAngle(Vector3.back, new Vector3(buttonPosition.x, 0f, buttonPosition.y), _Needle.transform.up);
        _Needle.transform.localEulerAngles = new Vector3(0f, c_needleAngle, 0f);
        //float c_needleAngle = Vector3.SignedAngle(_Needle.transform.position - transform.forward, new Vector3(0f, buttonPosition.y, buttonPosition.x).normalized, _Needle.transform.up);
        //_Needle.transform.localRotation = Quaternion.Euler(0f, c_needleAngle, 0f);
    }

    private void ResetButton()
    {
        for (int i = 0; i < _SelectorButtons.Length; i++)
        {
            _SelectorButtons[i].ResetScale();
        }

        _joyStickDir = Vector2.zero;
    }

    private void OnValidate()
    {

        if (_Radius < _MinRadius)
            _Radius = _MinRadius;

        if (_Radius > _MaxRadius)
            _Radius = _MaxRadius;

        CalculateButtonOffsets();
    }

}
 