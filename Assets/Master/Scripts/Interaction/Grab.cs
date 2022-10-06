using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Events;

public class Grab : MonoBehaviour
{
    [Header("Setup")]
    [Space(2)]
    [SerializeField] private InteractionManager _InteractionManager;
    [Space(5)]
    [SerializeField] private bool _IsHolding;
    [SerializeField] private bool _IsClicked;

    private float _Range;
    private bool _ClickGrab;
    private GameObject _GrabedObject;
    private IGrabable c_Target;

    private void Start()
    {
        _Range = _InteractionManager.Range;
        _ClickGrab = _InteractionManager.ClickGrab;
        _IsClicked = false;
    }

    private void Update()
    {
        if (_GrabedObject != null)
        {
            if (!_GrabedObject.activeSelf)
                Detached(c_Target);
        }

        if (_InteractionManager.UseRayGrab)
            this.GetComponent<Collider>().enabled = false;
        else
            this.GetComponent<Collider>().enabled = true;

    }

    #region Grab Functions

    #region Raybase Grab Function
    public void RayGrab(InputAction.CallbackContext context)
    {
        if (!_IsHolding && _InteractionManager.UseRayGrab)
        {
            c_Target = null;
            Physics.Raycast(transform.position, transform.position + transform.forward * _Range, out RaycastHit hit);
            if (hit.collider.enabled && hit.collider.CompareTag("grab"))
            {

                _GrabedObject = hit.collider.gameObject;

                if (_GrabedObject.GetComponent<IGrabable>() != null)
                    c_Target = _GrabedObject.GetComponent<IGrabable>();
                else
                    _GrabedObject.SetActive(false);

                GrabItem(c_Target);
                
            }
            
        }


        if (!context.ReadValueAsButton())
        {
            if (!_ClickGrab)
            {
                Debug.Log("Detached");
                Detached(c_Target);
            }
            else
            {
                if (_IsClicked)
                {
                    Debug.Log("Detached");
                    Detached(c_Target);
                }
                else
                    _IsClicked = true;
            }
            
        }

    }
    #endregion


    #region Colliderbase Grab Function
    private void OnTriggerEnter(Collider other)
    {
        if (_InteractionManager.UseRayGrab || _GrabedObject != null)
            return;
        else
        {
            if (_GrabedObject == other)
                Detached(c_Target);

            if (other.enabled && other.CompareTag("grab"))
            {
                _GrabedObject = other.gameObject;

                if (_GrabedObject.GetComponent<IGrabable>() != null)
                    c_Target = _GrabedObject.GetComponent<IGrabable>();
                else
                    _GrabedObject.SetActive(false);

                _IsClicked = true;

                GrabItem(c_Target);
            }
        }
        
    }
    #endregion



    #region Grab and Detached
    private void GrabItem(IGrabable Target)
    {
        Debug.Log(string.Format("Attached to : {0}", this.name));
        _IsHolding = true;
        Target.Grabed(this.gameObject);
    }
    public void Detached(IGrabable Target)
    {
        Debug.Log(string.Format("Detached from : {0}", this.name));
        _IsHolding = false;
        _IsClicked = false;
        _GrabedObject = null;
        Target.Detached(this.gameObject);
    }
    #endregion

    #endregion



    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawLine(transform.position, transform.position + transform.forward * 5f);
    }
}
