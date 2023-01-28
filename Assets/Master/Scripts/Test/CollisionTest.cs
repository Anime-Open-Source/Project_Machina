using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionTest : MonoBehaviour
{
    [SerializeField] bool m_Colliding = false;
    [SerializeField] Collider m_Collider;

    private void Update()
    {
        if (m_Colliding)
            m_Collider.enabled = true;
        else
            m_Collider.enabled = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(other.name);
    }
}
