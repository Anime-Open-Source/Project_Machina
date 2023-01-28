using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestDirectionalRotation : MonoBehaviour
{
    [SerializeField] private GameObject _Target;
    [SerializeField] private GameObject _RotatingBody;

    [SerializeField] private Vector3 _OffsetRotation;
    private void Start()
    {
        _OffsetRotation = transform.rotation.eulerAngles;
    }

    private void Update()
    {
        transform.up = (_Target.transform.position - _RotatingBody.transform.position);
        //transform.rotation = Quaternion.LookRotation((_Target.transform.position - _RotatingBody.transform.position) /*- _OffsetRotation*/);
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.blue;
        Gizmos.DrawLine(transform.position, transform.position + transform.forward);
        Gizmos.color = Color.green;
        Gizmos.DrawLine(transform.position, transform.position + transform.up);
    }
}
