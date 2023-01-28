using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BowStringVisual : MonoBehaviour
{
    [Header("Setup")]
    [Space(5)]
    [SerializeField] private Transform _CenterPoint;
    [SerializeField] private Transform _PullPoint;
    [SerializeField] private Transform _UpperStringPoint;
    [SerializeField] private Transform _LowerStringPoint;
    [SerializeField] private LineRenderer _LineRenderer;
    [Space(5)]
    [Header("Settings")]
    [SerializeField] private float _Multiplier;
    [Range(0, 1)]
    [SerializeField] private float _PullPower;
    [Range(0,1)]
    [SerializeField] private float _CenterY;

    private Vector3[] _StringPositions = new Vector3[3];

    [SerializeField]private Vector3 _EndPullPos;


    public Transform PullPoint{ get { return _PullPoint; } private set { } }
    public float PullPower { get { return _PullPower; } private set { } }
    public Transform CenterPoint { get { return _CenterPoint; } private set { } }

    private void Start()
    {
        _EndPullPos = new Vector3(0f, 0f, _CenterPoint.localPosition.z);
    }

    private void Update()
    {
        

        _StringPositions[0] = _UpperStringPoint.position;
        _StringPositions[2] = _LowerStringPoint.position;

        if (_PullPoint)
        {
            Vector3 c_GlobalStartPos = _CenterPoint.TransformPoint(Vector3.zero);
            Vector3 c_GlobalEndPos = _CenterPoint.TransformPoint(_EndPullPos);

            _PullPower = _EndPullPos.z - _PullPoint.localPosition.z;

            _StringPositions[1] = Vector3.Lerp(c_GlobalStartPos, c_GlobalEndPos, _PullPower * _Multiplier);

            
        }


        if (_LineRenderer)
        {
            _LineRenderer.SetPositions(_StringPositions);
        }

    }



}
