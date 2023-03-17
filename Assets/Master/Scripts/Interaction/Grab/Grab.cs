using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Events;
using System;
[RequireComponent(typeof(Collider))]
[RequireComponent(typeof(HandController))]

public class Grab : MonoBehaviour
{
    [Header("Setup")]
    [Space(10)]

    [SerializeField] private InputActionAsset _VRJoystickAsset;
    [SerializeField] private InteractionManager _InteractionManager;
    [SerializeField] private Animator _Animator;
    [SerializeField] private GameObject _Palm;
    [SerializeField] private Collider _PalmCollider;

    [Space(10)]
    public UnityEvent OnGrab;

    private bool _IsHolding;
    private bool _IsClicked;

    HandController _HandController;

    private InputActionMap _VRJoysticMap;
    private InputAction _TriggerAction;

    private DetectionType _CurrentDetectionType;
    private InteractionMode _InteractionMode;

    private GameObject _GrabedObject;
    private IGrabable c_Target;

    public GameObject GetGrabedeObject()
    {
        return _GrabedObject;
    }

    private void Start()
    {
        Init();
    }

    private void Update()
    {
        if (_TriggerAction.IsPressed())
            _Animator.SetFloat("Blend", -1f);
        else
        {
            _Animator.SetFloat("Blend", 1f);
            _PalmCollider.enabled = false;
        }
            

        if (_GrabedObject != null)
        {
            _Animator.SetFloat("Blend", -1f);

            if (!_GrabedObject.activeSelf)
                Detached(c_Target);
        }

        if (_InteractionMode == InteractionMode.Hold)
        {
            if (_TriggerAction.WasReleasedThisFrame() && _IsHolding)
                Detached(c_Target);

                
        }

    }

    #region Grab Functions

    #region Raybase Grab Function
    public void RayGrab(InputAction.CallbackContext context)
    {
        if (!_IsHolding)
        {
           

            c_Target = null;
            if (!Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out RaycastHit hit, Mathf.Infinity))
                return;

            if (!hit.collider.enabled || !hit.collider.CompareTag("grab"))
                return;

            _GrabedObject = hit.collider.gameObject;

            if (_GrabedObject.GetComponent<IGrabable>() != null)
                c_Target = _GrabedObject.GetComponent<IGrabable>();


            Debug.Log("Click");
            _IsClicked = true;

            GrabItem(c_Target);
            return;

        }

        if (_InteractionMode == InteractionMode.Click)
        {
            if (_IsHolding && _IsClicked)
                Detached(c_Target);

        }

    }
    #endregion


    #region Colliderbase Grab Function
    
    private void ColliderGrab(InputAction.CallbackContext context)
    {

        if (!_IsHolding)
        {
            _PalmCollider.enabled = true;
        }

        if (_InteractionMode == InteractionMode.Click)
        {
            if (_IsHolding && _IsClicked)
                Detached(c_Target);

        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!other.enabled || !other.CompareTag("grab"))
            return;

        _GrabedObject = other.gameObject;

        if (_GrabedObject.GetComponent<IGrabable>() != null)
            c_Target = _GrabedObject.GetComponent<IGrabable>();


        Debug.Log("Click");
        _IsClicked = true;

        _PalmCollider.enabled = false;

        GrabItem(c_Target);
        return;
    }

    #endregion

    #region Grab and Detached
    private void GrabItem(IGrabable Target)
    {
        Debug.Log(string.Format("Attached to : {0}", this.name));
        OnGrab.Invoke();
        _IsHolding = true;
        Target.Grabed(_Palm);
    }
    public void Detached(IGrabable Target)
    {
        Debug.Log(string.Format("Detached from : {0}", this.name));
        _IsHolding = false;
        _IsClicked = false;
        _GrabedObject = null;
        Target.Detached(_Palm);
    }
    #endregion

    #region Grab Function Init

    private void InitRayBaseGrab()
    {
        _TriggerAction.performed -= ColliderGrab;
        _TriggerAction.performed -= RayGrab;

        _TriggerAction.performed += RayGrab;
        _CurrentDetectionType = DetectionType.RayCast;
    }

    private void InitColliderBaseGrab()
    {
        _TriggerAction.performed -= ColliderGrab;
        _TriggerAction.performed -= RayGrab;

        _TriggerAction.performed += ColliderGrab;
        _CurrentDetectionType = DetectionType.Collider;
    }

    #endregion

    #endregion

    #region System Init

    private void Init()
    {
        if (!_InteractionManager)
        {
            _InteractionManager = GetComponentInParent<InteractionManager>();
            if (!_InteractionManager)
            {
                Debug.LogError(string.Format("Cannot find InteractionManager in {0}", transform.parent.name));
                Debug.Break();
                return;
            }
        }

        _PalmCollider.enabled = false;

        _IsClicked = false;

        ControllInit();

        _InteractionMode = _InteractionManager.interactionMode;

    }

    private void ControllInit()
    {
        if (!_VRJoystickAsset)
            return;

        _VRJoystickAsset.Enable();

        _HandController = GetComponent<HandController>();

        #region Get Hand Orientation
        switch (_HandController.handOrientation)
        {
            case HandOrientation.Left:
                _VRJoysticMap = _VRJoystickAsset.FindActionMap("LeftController");
                break;
            case HandOrientation.Right:
                _VRJoysticMap = _VRJoystickAsset.FindActionMap("RightController");
                break;
            case HandOrientation.Undefined:
                _VRJoysticMap = null;
                break;
            default:
                break;
        }
        #endregion

        //Subscribe to "Trigger" Action
        if (_VRJoysticMap != null)
        {
            _TriggerAction = _VRJoysticMap.FindAction("Trigger");

            #region Detection Type

            switch (_InteractionManager.detectionType)
            {
                case DetectionType.None:
                    break;
                case DetectionType.RayCast:
                    InitRayBaseGrab();
                    break;
                case DetectionType.Collider:
                    InitColliderBaseGrab();
                    break;
                default:
                    break;
            }
            #endregion
        }



    }
    #endregion

    #region Enable Disable

    private void OnEnable()
    {
        _VRJoystickAsset.Enable();
    }
    private void OnDisable()
    {
        _VRJoystickAsset.Disable();
    }

    #endregion

    public void ChangeDetectionType(DetectionType type)
    {

        Debug.Log("Change");

        switch (type)
        {
            case DetectionType.None:
                break;
            case DetectionType.RayCast:
                InitRayBaseGrab();
                break;
            case DetectionType.Collider:
                InitColliderBaseGrab();
                break;
            default:
                break;
        }
    }

    public void ChangeInteractionType(InteractionMode interactionMode)
    {
        if (_InteractionMode.Equals(InteractionMode.Hold))
        {
            _InteractionMode = interactionMode;
            return;
        }

        if (_IsHolding)
        {

            return;
        }
            

        _InteractionMode = interactionMode;
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawLine(transform.position, transform.position + transform.forward * 5f);
    }

}
