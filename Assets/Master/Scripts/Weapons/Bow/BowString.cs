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

    private Transform _HandTransform;
    
    private Vector3 _Velocity;
    private Vector3 _PullStartPos;
    private Vector3 _LocalStartPos;

    private Bow _ParentBow;
    private bool _IsGrabbed;


    private float _DotProduct;
    private float _SmoothTime;


    private void OnEnable()
    {
        if (_LocalStartPos == Vector3.zero || _LocalStartPos != transform.localPosition)
            _LocalStartPos = transform.localPosition;

        if (_LocalStartPos == transform.localPosition)
            _PullStartPos = transform.position;
    }

    private void OnDisable()
    {
        _LocalStartPos = Vector3.zero;
        _PullStartPos = Vector3.zero;
    }

    private void Start()
    {
        if (!this.gameObject.activeSelf)
            _HandTransform = null;

        _ParentBow = transform.parent.GetComponent<Bow>();
    }

    private void Update()
    {
        _SmoothTime = _ParentBow.SmoothTime;

        if (_HandTransform)
            transform.position = _HandTransform.position;

        if (!_IsGrabbed && Vector3.Distance(transform.localPosition, _PullStartPos) >= 0f)
        {
            transform.localPosition = Vector3.SmoothDamp(transform.localPosition, _LocalStartPos, ref _Velocity, _SmoothTime);
        }


        _DotProduct = Vector3.Dot(transform.forward, _PullStartPos - transform.position);


        if (_DotProduct >= _ParentBow.MinimalPull)
            _ParentBow.Charge = _DotProduct;
        else
            _ParentBow.Charge = 0;

    }
}
