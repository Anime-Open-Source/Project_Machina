using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIScript : MonoBehaviour
{
    [SerializeField] private GameObject _WeaponSelector;

    private void Update()
    {
        transform.position = _WeaponSelector.transform.position;
        transform.rotation = _WeaponSelector.transform.rotation;
    }
}
