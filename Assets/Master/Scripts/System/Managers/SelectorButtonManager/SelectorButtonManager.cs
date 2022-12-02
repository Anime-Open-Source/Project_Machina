using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class SelectorButtonManager : MonoBehaviour
{
    [Header("Setup")]
    [SerializeField] private InputActionReference _VRJoystickReference;
    [Header("Lists")]
    [SerializeField] private List<SelectorButton> _SelectorButtons = new List<SelectorButton>();
    [Header("Settings")]
    [SerializeField] private bool _UseAnimation;
    [Min(0f)]
    [SerializeField] private float _MinRadius, _Radius, _MaxRadius;

    private float _Degrees;

    private void CalculateOffsets()
    {
        for (int i = 0; i < _SelectorButtons.Count; i++)
        {

            float c_Const = 360f;


            float SinX = Mathf.Sin(_Degrees * Mathf.Deg2Rad) * _Radius;
            float CosZ = Mathf.Cos(_Degrees * Mathf.Deg2Rad) * _Radius;

            Vector3 _ButtomOffsets = new Vector3(SinX, CosZ, 0f);

            Vector3 c_GlobalTranslate = transform.TransformPoint(_ButtomOffsets);

            _SelectorButtons[i].transform.position = c_GlobalTranslate;
            Vector3 c_Look = transform.position - c_GlobalTranslate;
            _SelectorButtons[i].transform.rotation = Quaternion.LookRotation(c_Look, transform.forward);



            _Degrees += c_Const / _SelectorButtons.Count;


        }
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
