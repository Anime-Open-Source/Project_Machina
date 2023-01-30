using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BowString : MonoBehaviour
{
    private void OnDisable()
    {
        transform.position = _PullStartPos;
        _PullStartPos = Vector3.zero;
        _LocalStartPos = Vector3.zero;

        if (_InteractionManager.detectionType == c_OriginalDetectionType)
            return;
        else
            _InteractionManager.ChangeDetectionType(c_OriginalDetectionType);

    }

    private void OnEnable()
    {
        _LocalStartPos = transform.localPosition;
        c_OriginalDetectionType = _InteractionManager.detectionType;
        if (c_OriginalDetectionType == DetectionType.Collider)
            return;
        else
            _InteractionManager.ChangeDetectionType(DetectionType.Collider);
    }

    [Header("Setup")]
    [Space(10)]
    [SerializeField] private BowStringVisual _Visualizer;
    [SerializeField] private float _Multiplier;
    [SerializeField] private InteractionManager _InteractionManager;

    private DetectionType c_OriginalDetectionType;

    private Vector3 _Velocity;
    private Vector3 _PullStartPos;
    private Vector3 _LocalStartPos;

    private Bow _ParentBow;
    private bool _IsGrabbed;

    private float _SmoothTime;

    private void Start()
    {

        _ParentBow = transform.parent.GetComponent<Bow>();
    }

    private void Update()
    {
        _SmoothTime = _ParentBow.SmoothTime;

        if (_LocalStartPos == transform.localPosition)
            _PullStartPos = transform.position;

        //Move Back To start if not grabed
        if (!_IsGrabbed && Vector3.Distance(transform.position, _PullStartPos) >= 0f)
            transform.localPosition = Vector3.SmoothDamp(transform.localPosition, _LocalStartPos, ref _Velocity, _SmoothTime);
            

        _Visualizer.PullPoint.position = transform.position;

    }


    public void OnGrabbed(Transform GrabTransform)
    {
        _IsGrabbed = true;
    }

    public void OnDetached(Transform GrabTransform)
    {
        // TODO : [MERGE CENTER POINT]
        //_Visualizer.PullPoint.position = _Visualizer.CenterPoint.position;
        _IsGrabbed = false;
        _ParentBow.Shoot(_Visualizer.PullPower);
    }
}
