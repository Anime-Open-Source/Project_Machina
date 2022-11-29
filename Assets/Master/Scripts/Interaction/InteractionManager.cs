using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public enum DetectionType
{
    None, RayCast, Collider
}
public enum InteractionMode
{
    None, Click, Hold
}

public class InteractionManager : MonoBehaviour
{

    [Header("Events")]
    public UnityEvent<DetectionType> OnDetectionTypeChange;

    [Header("Setting")]
    [Space(2)]
    [SerializeField] private float _SmoothTime;

    [SerializeField] private float _Range;

    [Tooltip("If enabled will change the grab from hold to click")]
    [SerializeField] private bool _ClickGrab;

    [Tooltip("Chose how the game detect items")]
    [SerializeField] private DetectionType _detectionType = DetectionType.None;
    [SerializeField] private InteractionMode _interactionMode = InteractionMode.None;

    public DetectionType detectionType { get { return _detectionType; } private set { } }
    public InteractionMode interactionMode { get { return _interactionMode; } private set { } }

    public float SmoothTime { get { return _SmoothTime; } private set { } }
    public float Range { get { return _Range; } private set { } }
    public bool ClickGrab { get { return _ClickGrab; } private set { } }


    public void ChangeDetectionType(DetectionType type)
    {
        OnDetectionTypeChange.Invoke(type);
        _detectionType = type;
    }




}
