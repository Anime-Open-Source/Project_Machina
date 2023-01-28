using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrossProductTest : MonoBehaviour
{
    [SerializeField] private float _Angle;

    private Vector3 _Forward;
    private Vector3 _Up;
    private Vector3 _Cross;

    private void OnDrawGizmos()
    {
        _Forward = transform.forward + transform.position;
        _Up = transform.up + transform.position;

        Gizmos.color = Color.red;
        Gizmos.DrawLine(transform.position, _Forward);
        Gizmos.color = Color.blue;
        Gizmos.DrawLine(transform.position, _Up);
        Gizmos.color = Color.green;
        Gizmos.DrawLine((Vector3.Cross(_Forward, _Up) + transform.position), transform.position);
    }

    private void Update()
    {

        _Forward = transform.forward + transform.position;
        _Up = transform.up + transform.position;
        _Cross = Vector3.Cross(_Forward, _Up) + transform.position;

        transform.Rotate(_Cross);

        Debug.Log(_Cross);
    }
}
