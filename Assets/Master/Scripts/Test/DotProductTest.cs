using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DotProductTest : MonoBehaviour
{
    [SerializeField] Transform _Other;
    [SerializeField] float _Dot;

    private void Update()
    {
        Vector3 Forward = transform.TransformDirection(-Vector3.forward);
        Vector3 Other = _Other.transform.position - transform.position;
        _Dot = Vector3.Dot(Forward, Other);
    }
}
