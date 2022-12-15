using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

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

    private InputAction _VRJoystickAction;
    private float _Degrees;

    private void Awake()
    {
        Innit();
    }

    private void CalculateOffsets()
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

    private void CalculateAngle(InputAction.CallbackContext context)
    {
        
        Vector2 c_JoystickDir = context.ReadValue<Vector2>().normalized;
        
        float c_JoystickAngle = Vector2.SignedAngle(Vector2.up, c_JoystickDir);


        for (int i = 0; i < _SelectorButtonPositions.Length; i++)
        {
            float c_DotProduct = Vector3.Dot(_SelectorButtonPositions[i], c_JoystickDir);

            if (c_DotProduct <= -0.05f)
            {
                Debug.Log(c_DotProduct);
                _SelectorButtons[i].Hover(2f);
            }

        }
       


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

        _VRJoystickAction.performed += CalculateAngle;
    }

   

    private void OnValidate()
    {

        if (_Radius < _MinRadius)
            _Radius = _MinRadius;

        if (_Radius > _MaxRadius)
            _Radius = _MaxRadius;

        CalculateOffsets();
    }

}
