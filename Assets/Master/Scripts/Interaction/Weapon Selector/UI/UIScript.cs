using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIScript : MonoBehaviour
{
    [SerializeField] private GameObject _WeaponSelector;
    [SerializeField] private Vector3 _RotationOffsets;
    [SerializeField] private bool _Click;

    private void Update()
    {
        transform.position = _WeaponSelector.transform.position;
    }

}
