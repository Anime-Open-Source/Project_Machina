using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class Projectile : MonoBehaviour
{
    [SerializeField] private bool _Launch;

    [SerializeField] private float _InitVelocity;
    [SerializeField] private float _LaunchAngle;
    [SerializeField] private float _GravityMultiplier;
    [SerializeField] private float _InitHeight;
    [SerializeField] private Transform _ProjectileStabilizer;

    [SerializeField] private UnityEvent<Vector3> _OnHitEvent;

    private Vector3 _Velocity;
    private Quaternion _StabilizingForward;

    private bool _Hit;
    private float t;

    public void AssignParameter(float InitVelocity, float InitHeight, float LaunchAngle)
    {
        _InitVelocity = InitVelocity;
        _InitHeight = InitHeight;
        _LaunchAngle = LaunchAngle;
    }

    private void Start()
    {
        _InitHeight = transform.position.y;
        _StabilizingForward = transform.rotation;
    }

    private void Update()
    {
        t += Time.deltaTime;

        if (!_Hit && transform.position.y >= 0f)
        {
            float Vx = _InitVelocity * Mathf.Cos(_LaunchAngle * Mathf.Deg2Rad);
            float Vy = _InitVelocity * Mathf.Sin(_LaunchAngle * Mathf.Deg2Rad);

            float X = Vx * t;
            float Y = Vy * t - (0.5f * -Physics.gravity.y * Mathf.Pow(t, 2f));

            _ProjectileStabilizer.rotation = _StabilizingForward;

            Vector3 c_LocalPosition = new Vector3(0, Y, X);
            Vector3 c_GlobalPosition = _ProjectileStabilizer.TransformPoint(c_LocalPosition);

            Vector3 c_Velocity = c_GlobalPosition - transform.position;

            transform.rotation = Quaternion.LookRotation(c_Velocity);
            transform.position = c_GlobalPosition;




        }
        else
        {
            Destroy(gameObject);
        }
    }


    private void OnTriggerEnter(Collider other)
    {
        _Hit = true;
    }


    private Vector3 GetAxis(Vector3 Forward, Vector3 Up)
    {
        Vector3 c_RotationAxis =  Vector3.Cross(Forward, Up);
        return c_RotationAxis;
    }

    private void OnDrawGizmos()
    {
        Vector3 c_Ground = transform.position + transform.forward;
        Vector3 c_GroundUp = transform.position + transform.up;

        Gizmos.color = Color.red;
        Gizmos.DrawLine(transform.position, GetAxis(c_Ground, c_GroundUp) + transform.position);
        Gizmos.color = Color.blue;
        Gizmos.DrawLine(transform.position, c_Ground);
        Gizmos.color = Color.green;
        Gizmos.DrawLine(transform.position, c_GroundUp);
    }

}
