using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractionManager : MonoBehaviour
{
    [Header("Setting")]
    [Space(2)]
    [SerializeField] private float _SmoothTime;

    [SerializeField] private float _Range;

    [Tooltip("If enabled will change the grab from hold to click")]
    [SerializeField] private bool _ClickGrab;


    public float SmoothTime { get { return _SmoothTime; } private set { } }
    public float Range { get { return _Range; } private set { } }
    public bool ClickGrab { get { return _ClickGrab; } private set { } }

}
