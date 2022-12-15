using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectorButton : MonoBehaviour
{
    [Header("Setup")]
    [SerializeField] private GameObject _Prefab;
    [SerializeField] private float _Zoom;

    public void Hover(float Zoom)
    {
        transform.localScale = new Vector3(Zoom, Zoom, Zoom);
    }

    private void OnValidate()
    {
        Hover(_Zoom);
    }
}
