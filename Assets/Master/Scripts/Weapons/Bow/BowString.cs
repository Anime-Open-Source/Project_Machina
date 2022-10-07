using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BowString : MonoBehaviour, IGrabable
{
    #region Interface Implementation
    public void Detached(GameObject Hand)
    {
        
        _HandTransform = null;
        _IsGrabbed = false;
    }

    public void Grabed(GameObject Hand)
    {
        
        _HandTransform = Hand.transform;
        _IsGrabbed = true;

    }
    #endregion

    private void OnDisable()
    {
        _ParentBow.Charge = 0;
        _DotProduct = 0f;
        transform.position = _PullStartPos;

        _PullStartPos = Vector3.zero;
        _LocalStartPos = Vector3.zero;
    }

    private void OnEnable()
    {
        _LocalStartPos = transform.localPosition;
    }

    private Transform _HandTransform;
    
    private Vector3 _Velocity;
    private Vector3 _PullStartPos;
    private Vector3 _LocalStartPos;

    private Bow _ParentBow;
    private bool _IsGrabbed;


    private float _DotProduct;
    private float _SmoothTime;

    private void Start()
    {
        if (!this.gameObject.activeSelf)
            _HandTransform = null;

        _ParentBow = transform.parent.GetComponent<Bow>();
    }

    private void Update()
    {
        _SmoothTime = _ParentBow.SmoothTime;

        if (_LocalStartPos == transform.localPosition)
            _PullStartPos = transform.position;

        //Check if hand is not null
        if (_HandTransform)
            transform.position = _HandTransform.position;

        //Move Back To start if not grabed
        if (!_IsGrabbed && Vector3.Distance(transform.position, _PullStartPos) >= 0f)
            transform.localPosition = Vector3.SmoothDamp(transform.localPosition, _LocalStartPos, ref _Velocity, _SmoothTime);

        Vector3 Forward = _ParentBow.transform.TransformDirection(Vector3.forward);
        Vector3 Other = transform.position - _ParentBow.transform.position;
        _DotProduct = Vector3.Dot(Forward, Other); ;


        if (_DotProduct <= _ParentBow.MinimalPull)
            _ParentBow.Charge = -_DotProduct;
        else
            _ParentBow.Charge = 0;

    }
}
