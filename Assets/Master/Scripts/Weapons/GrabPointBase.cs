using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class GrabPointBase : MonoBehaviour, IGrabable
{
    public void Detached(GameObject Hand)
    {
        OnDetachedEvent.Invoke(transform);
        _DetectionCollider.enabled = true;
        _HandTransform = null;
        ResetPosition();
    }

    public void Grabed(GameObject Hand)
    {
        OnGrabEvent.Invoke(transform);
        _HandTransform = Hand.transform;
        _DetectionCollider.enabled = false;

    }

    //Trigger Collider only
    [SerializeField] private Collider _DetectionCollider;
    [SerializeField] private Transform _HandTransform;


    public UnityEvent<Transform> OnGrabEvent;
    public UnityEvent<Transform> OnDetachedEvent;

    private Vector3 _LocalPosition;
    private Vector3 _LocalRotation;



    private void Start()
    {
        _LocalPosition = transform.localPosition;
        _LocalRotation = transform.localEulerAngles;
    }


    private void Update()
    {
        if (_HandTransform != null)
        {
            transform.position = _HandTransform.position;
            transform.rotation = _HandTransform.rotation;
        }
    }

    private void OnDisable()
    {
        if(_DetectionCollider && _HandTransform != null)
            Detached(_HandTransform.gameObject);
    }

    private void ResetPosition()
    {
        transform.localPosition = _LocalPosition;
        transform.localEulerAngles = _LocalRotation;
    }

}
