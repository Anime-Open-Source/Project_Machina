using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem.UI;

public class LaserPointer : MonoBehaviour
{
    [Header("Setup")]
    [SerializeField] private LineRenderer _lineRendere;
    [SerializeField] private EventSystem _eventSystem;
    [SerializeField] private TrackedDeviceRaycaster _raycaster;
    [Header("Settings")]
    [SerializeField] private float _refreshRate;
    [SerializeField] private float _range;
    
    private List<RaycastResult> _pointerEvents;
    private PointerEventData _pointerEventData;

    private void Update()
    {
        _pointerEventData = new PointerEventData(null);
        _pointerEventData.position = transform.position + transform.forward * _range;
        _pointerEvents = new List<RaycastResult>();
        _raycaster.Raycast(_pointerEventData, _pointerEvents);

        //_pointerEventData = new PointerEventData(_eventSystem);
        //_pointerEventData.worldPosition = transform.position + transform.forward * _range;
        //_pointerEvents = new List<RaycastResult>();
        //_raycaster.Raycast(_pointerEventData, _pointerEvents);

        foreach (var item in _pointerEvents)
        {
            Debug.Log(item);
        }

        //if (TimerEnd(Time.deltaTime))
        //{
        //    Debug.Log("Test");
        //    _pointerEventData = new PointerEventData(_eventSystem);
        //    _pointerEventData.worldPosition = transform.position + transform.forward * _range;
        //    _pointerEvents = new List<RaycastResult>();
        //    _raycaster.Raycast(_pointerEventData, _pointerEvents);

        //    foreach (var item in _pointerEvents)
        //    {
        //        Debug.Log(item);
        //    }
        //}
    }

    private bool TimerEnd(float deltaTime)
    {

        if (deltaTime >= _refreshRate)
        {
            deltaTime = 0f;
            return true;
        }

        deltaTime += Time.deltaTime;
        return false;
        
    }
}
