using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
[RequireComponent(typeof(ProjectileMovement))]


public class Projectile : MonoBehaviour
{
    [SerializeField] private bool _Launch;
    [SerializeField] private ProjectileMovement _Movement;

    [SerializeField] private UnityEvent<Vector3> _OnHitEvent;

    private bool _Hit;

    private float t;

    public void AssignParameter(float InitVelocity, float LaunchAngle)
    {
        _Movement.InitVelocity = InitVelocity;
        _Movement.LaunchAngle = LaunchAngle;
    }
   

    private void OnTriggerEnter(Collider other)
    {
        _Hit = true;
    }

}
