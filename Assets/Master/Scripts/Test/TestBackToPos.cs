using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestBackToPos : MonoBehaviour
{
    [SerializeField] Transform _Object;

    public void ReturnToPos()
    {
        _Object.transform.position = transform.position;
    }
}
