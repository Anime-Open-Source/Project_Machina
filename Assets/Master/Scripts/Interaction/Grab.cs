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

    private float _Range;
    private bool _ClickGrab;

    private void Start()
    {
        _Range = _InteractionManager.Range;
        _ClickGrab = _InteractionManager.ClickGrab;
    }

    #region Grab Functions

    #region Raybase Grab Function
    public void RayGrab(InputAction.CallbackContext context)
    {
        IGrabable c_Target = null;
        if (!_IsHolding)
        {
            Physics.Raycast(transform.position, transform.position + transform.forward * _Range, out RaycastHit hit);
            if (hit.transform.tag == "grab")
            {
                Debug.Log("HIT!!");
                c_Target = hit.transform.gameObject.GetComponent<IGrabable>();
                GrabItem(c_Target);
            }
        }


        if (!context.ReadValueAsButton() && !_ClickGrab && c_Target != null)
        {
            Debug.Log("Detached");
            Detached(c_Target);
        }

        if (context.performed && _ClickGrab && c_Target != null)
        {
            Debug.Log("Detached");
            Detached(c_Target);
        }

    }
    #endregion

    #region Grab and Detached
    private void GrabItem(IGrabable Target)
    {
        _IsHolding = true;
        Target.Grabed(gameObject);
    }
    public void Detached(IGrabable Target)
    {
        _IsHolding = false;
        Target.Detached(gameObject);
    }
    #endregion

    #endregion
}
