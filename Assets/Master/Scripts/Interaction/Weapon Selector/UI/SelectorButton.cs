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

    public void ResetScale()
    {
        transform.localScale = new Vector3(_Zoom, _Zoom, _Zoom);
    }

    private void OnValidate()
    {
        Hover(_Zoom);
    }
}
