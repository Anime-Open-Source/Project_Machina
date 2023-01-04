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
    [Header("Lists")]
    [SerializeField] private SelectorButton[] _SelectorButtons;
    [Header("Settings")]
    [SerializeField] private bool _UseAnimation;
    [Min(0f)]
    [SerializeField] private float _MinRadius, _Radius, _MaxRadius;

    private Vector3[] _SelectorButtonPositions;

    private SelectorButton _SelectedButton;

    private InputAction _VRJoystickAction;
    private float _Degrees;

    Vector2 _joyStickDir;

    private void Awake()
    {
        Innit();
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
    }

    private void SelectWeapon(InputAction.CallbackContext context)
    {

        if (context.canceled)
        {
            _SelectedButton = HoverOnButton();
            _SelectedButton.OnSelectWeapon.Invoke();
            ResetButton();
        }

        _joyStickDir = _VRJoystickAction.ReadValue<Vector2>();

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

            Vector3 _ButtomOffsets = new Vector3(SinX, CosZ, 0f);

            Vector3 c_GlobalTranslate = transform.TransformPoint(_ButtomOffsets);

            _SelectorButtons[i].transform.position = c_GlobalTranslate;
            Vector3 c_Look = transform.position - c_GlobalTranslate;
            _SelectorButtons[i].transform.rotation = Quaternion.LookRotation(c_Look, transform.forward);

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

            if (c_dotProduct! > -0.06f)
            {
                _SelectorButtons[i].ResetScale();
                continue;
            }
            
            _SelectorButtons[i].Hover(1.5f);
            return _SelectorButtons[i];
        }

        return null;
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
