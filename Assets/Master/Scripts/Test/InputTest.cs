using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputTest : MonoBehaviour
{
    private enum HandOrient
    {
        None, Left, Right
    }

    [SerializeField] private HandOrient handOrient = HandOrient.None;
    [SerializeField] private InputActionAsset _ActionAssets;
    [Space(15)]
    [SerializeField] private GameObject _MoveTarget;

    private InputAction _Action;


    private void Awake()
    {
        _Action = _ActionAssets["JoystickMove"];
        _Action.performed += MoveObject;

    }

    private void OnEnable()
    {
        _ActionAssets.Enable();
        _Action.performed += MoveObject;
    }

    private void OnDisable()
    {
        _Action.performed -= MoveObject;
    }
    private void MoveObject(InputAction.CallbackContext context)
    {
        Vector2 c_JoystickMoveDir = context.ReadValue<Vector2>();
        Vector3 c_MoveDir = new Vector3(c_JoystickMoveDir.x, c_JoystickMoveDir.y, 0);
        _MoveTarget.transform.Translate(c_MoveDir.normalized);
    }
}
