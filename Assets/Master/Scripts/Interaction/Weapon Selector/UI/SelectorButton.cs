using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SelectorButton : MonoBehaviour
{
    [Header("Setup")]
    [SerializeField] private float _Zoom;
    [SerializeField] private GameObject _WeaponPrefab;
    [SerializeField] private Transform _WeaponSpawnPoint;
    [SerializeField] private Vector3 ZoomedPos;
    [Header("Events")]
    public UnityEvent OnSelectWeapon;
    public float defaultZoom { get { return _Zoom; } private set {} }
    public GameObject GetWeaponPrefab { get { return _WeaponPrefab; } }

    public Transform WeaponSpawnPoint { get { return _WeaponSpawnPoint; } private set {} }

    private Vector3 c_originalPos;

    private void Start()
    {
        c_originalPos = transform.localPosition;
    }

    public void Hover(float Zoom)
    {
        transform.localPosition = c_originalPos + ZoomedPos;
        transform.localScale = new Vector3(_Zoom, Zoom, _Zoom);
    }

    public void ResetScale()
    {
        transform.localScale = new Vector3(_Zoom, _Zoom, _Zoom);
        transform.localPosition = c_originalPos;
    }

    private void OnValidate()
    {
        Hover(_Zoom);
    }
}
