

using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SpatialTracking;

public enum HandOrientation
{
    Left, Right, Undefined
}

[RequireComponent(typeof(TrackedPoseDriver))]
public class HandController : MonoBehaviour
{
    [Header("Input Config")]
    [SerializeField] private HandOrientation m_handOrientation = HandOrientation.Undefined;
    [SerializeField] private InputActionAsset m_inputAssetController;

    InputActionMap _controllerInputMap;
    InputAction _triggerActions;

#if UNITY_EDITOR
    [Header("Debugging")]
    [SerializeField] private bool m_debugMode = false;
#endif

    private void Start()
    {
        if (!InitControllerInput(out _controllerInputMap))
            Debug.LogError("Failed to initializing Hand Controller.");
        else
        {

#if UNITY_EDITOR

            if (m_debugMode)
            {
                _triggerActions = _controllerInputMap.FindAction("Trigger");
                _triggerActions.performed += (context) =>
                {
                    switch (m_handOrientation)
                    {
                        case HandOrientation.Left:
                            Debug.Log("Left Trigger is pressed ... ");
                            break;
                        case HandOrientation.Right:
                            Debug.Log("Right Trigger is pressed ... ");
                            break;
                        case HandOrientation.Undefined:
                            break;
                    }
                };
            }
#endif

        }
    }

    private void OnEnable() => m_inputAssetController.Enable();

    private void OnDisable() => m_inputAssetController.Disable();

    private void OnValidate()
    {
        TrackedPoseDriver _tracked = GetComponent<TrackedPoseDriver>();
        if (_tracked)
        {
            switch (m_handOrientation)
            {
                case HandOrientation.Left:
                    if (_tracked.poseSource != TrackedPoseDriver.TrackedPose.LeftPose)
                        Debug.LogError("Source Pose must be Left Hand Controlled", this);
                    break;
                case HandOrientation.Right:
                    if (_tracked.poseSource != TrackedPoseDriver.TrackedPose.RightPose)
                        Debug.LogError("Source Pose must be Right Hand Controlled", this);
                    break;
            }
        }
    }

    /// <summary>
    /// Initializing Controller input.
    /// </summary>
    /// <param name="actionMap"></param>
    /// <returns></returns>
    protected virtual bool InitControllerInput(out InputActionMap actionMap)
    {

        switch (m_handOrientation)
        {
            case HandOrientation.Left:
                actionMap = m_inputAssetController.FindActionMap("LeftController");
                break;
            case HandOrientation.Right:
                actionMap = m_inputAssetController.FindActionMap("RightController");
                break;
            case HandOrientation.Undefined:
                actionMap = null;
                return true;
                break;
            default:
                actionMap = null;
                return true;
                break;
        }
        if (actionMap == null)
            return false;

        return true;
    }
}
