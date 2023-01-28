using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SelectorButton : MonoBehaviour
{
    [Header("Setup")]
    [SerializeField] private float _Zoom;
    [Header("Events")]
    public UnityEvent OnSelectWeapon;

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
