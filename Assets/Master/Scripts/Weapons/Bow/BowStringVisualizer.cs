using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode()]
public class BowStringVisualizer : MonoBehaviour
{
    [Header("Config")]
    [SerializeField] private float m_distanceToFullCharge = 5f;
    [Range(0f, 1f)] [SerializeField] private float m_normalizedCharge = 0f;

    [Header("Visual")]
    [SerializeField] private Transform m_stringPointInput;
    [Space]
    [SerializeField] private Transform m_upperStringPoint;
    [SerializeField] private Transform m_lowerStringPoint;

    [Header("References")]
    [SerializeField] private LineRenderer m_trailRenderer;

    Vector3[] _bowStringPoints = new Vector3[3];

    /// <summary>
    /// Charge visual with normalized value.
    /// </summary>
    public float Normalized
    {
        get => m_normalizedCharge;
        set { m_normalizedCharge = value; }
    }

    private void Update()
    {
        // Generating string line positiions ....
        _bowStringPoints[0] = m_upperStringPoint.transform.position;
        if (m_stringPointInput)
        {
            Vector3 _bowCenterString = Vector3.Lerp(_bowStringPoints[0], _bowStringPoints[2], 0.5f);
            _bowStringPoints[1] = Vector3.Lerp(_bowCenterString, -(m_stringPointInput.forward * m_distanceToFullCharge) + transform.position, m_normalizedCharge);
        }
        _bowStringPoints[2] = m_lowerStringPoint.transform.position;

        if (m_trailRenderer)
            m_trailRenderer.SetPositions(_bowStringPoints);
    }

    private void OnValidate()
    {
        if (m_trailRenderer == null)
            return;

        m_trailRenderer.positionCount = 3;

    }
}
