using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Collider))]
public class ProjectileComponent : MonoBehaviour
{
    [Header("Projectile")]
    [SerializeField] private float m_speed = 15f;
    [SerializeField] private float m_maximumDistanceTravel = 5f;

    [Space]
    [SerializeField] bool m_useGravity = true;
    [Range(0f, 1f)] [SerializeField] private float m_gravityScale = 1f;

    [Header("Misc")]
    [SerializeField] private bool m_snapOnHit = false;

    float _distanceTraveled;
    Vector3 _projectVelocity;
    bool _hit;

    private void FixedUpdate()
    {

        Simulate();
    }

    protected virtual void Simulate()
    {

        _projectVelocity = (transform.forward * m_speed) + (m_useGravity ? ((Physics.gravity / m_speed) * m_gravityScale) : Vector3.zero);
        _projectVelocity *= Time.fixedDeltaTime;

        _distanceTraveled += _projectVelocity.magnitude;
        if (_distanceTraveled >= m_maximumDistanceTravel)
            Destroy(gameObject);

        if (!_hit)
        {
            transform.rotation = Quaternion.LookRotation(_projectVelocity);
            transform.Translate(_projectVelocity, Space.World);
        }

    }


    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Hit " + other.gameObject.name);

        if(m_snapOnHit)
            _hit = true;
    }
}
