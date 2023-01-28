using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Orbit : MonoBehaviour
{
    [SerializeField] Transform _Target;
    [SerializeField] float _Deg;
    [SerializeField] float _Rad;
    [SerializeField] float _SmoothTime;

    private float _SinZ;
    private float _CosX;

    private Vector3 _Offsets;
    private Vector3 _Velocity;

    private void Update()
    {
        _SinZ = Mathf.Sin(Mathf.Deg2Rad * _Deg) * _Rad;
        _CosX = Mathf.Cos(Mathf.Deg2Rad * _Deg) * _Rad;

        _Offsets = new Vector3(_Target.position.x + _CosX, _Target.position.y, _Target.position.z + _SinZ);
        gameObject.transform.position = Vector3.SmoothDamp(transform.position, _Offsets, ref _Velocity, _SmoothTime);

        transform.LookAt(_Target);
    }
}
