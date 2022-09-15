using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Events;

public class Grab : MonoBehaviour
{
    [Header("Setup")]
    [Space(2)]
    [SerializeField] private bool _IsHolding;
    [SerializeField] private GameObject _GrabedItem;
    [SerializeField] private Rigidbody _GrabedItemRB;
    [SerializeField] public UnityEvent<GameObject> _GrabEvent;
    [SerializeField] private LineRenderer _Line;
    [Space(2)]
    [Header("Setting")]
    [SerializeField] private float _SmoothTime;
    [SerializeField] private float _Range;


    private Vector3 Velocity;

    private void Update()
    {
        if(_Line != null)
        {
            _Line.SetPosition(0, transform.position);
            _Line.SetPosition(1, transform.position + transform.forward);
        }
        

        if (_IsHolding)
        {
            _GrabedItem.transform.position = Vector3.SmoothDamp(_GrabedItem.transform.position, transform.position, ref Velocity, _SmoothTime);
            _GrabedItem.transform.rotation = transform.rotation;
        }
    }

    public void RayGrab(InputAction.CallbackContext context)
    {
        GameObject c_Target = gameObject;
        if (!_IsHolding)
        {
            Physics.Raycast(transform.position, transform.position + transform.forward * _Range, out RaycastHit hit);
            if (hit.transform.tag == "grab")
            {
                Debug.Log("HIT!!");
                c_Target = hit.transform.gameObject;
                GrabItem(c_Target);
            }
        }

        if (!context.ReadValueAsButton())
        {
            Debug.Log("Detached");
            Detached(c_Target);
        }
    }

    #region Grab and Detached
    private void GrabItem(GameObject Target)
    {
        _GrabEvent.Invoke(Target);

        _IsHolding = true;
        _GrabedItem = Target;
        _GrabedItemRB = _GrabedItem.GetComponent<Rigidbody>();
        _GrabedItemRB.isKinematic = true;
    }
    public void Detached(GameObject Target)
    {
        if ( _GrabedItem == Target || _IsHolding)
        {
            _IsHolding = false;
            Debug.Log("Recived by" + transform.name);
            _GrabedItemRB.isKinematic = false;
            _GrabedItemRB = null;
            _GrabedItem = null;

        }
    }
    #endregion
}
