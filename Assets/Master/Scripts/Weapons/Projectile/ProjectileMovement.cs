using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileMovement : MonoBehaviour
{

    [SerializeField] private float _InitVelocity;
    [SerializeField] private float _LaunchAngle;
    [SerializeField] private Transform _ProjectileStabilizer;

    public float InitVelocity { get { return _InitVelocity; } set { _InitVelocity = value; } }
    public float LaunchAngle { get { return _LaunchAngle; } set { _LaunchAngle = value; } }

    private bool _Hit;
    private float t;

    private void Start()
    {
        _ProjectileStabilizer.rotation = Quaternion.Euler(transform.rotation.eulerAngles + Vector3.up);

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

            Vector3 c_LocalPosition = new Vector3(0, Y, X);
            Vector3 c_GlobalPosition = _ProjectileStabilizer.TransformPoint(c_LocalPosition);

            Vector3 c_Velocity = c_GlobalPosition - transform.position;

            transform.rotation = Quaternion.LookRotation(c_Velocity);
            transform.position = c_GlobalPosition;




        }
        else
        {

            Clear();
            gameObject.SetActive(false);
        }
    }


    private void Clear()
    {
        t = 0f;
        _InitVelocity = 0f;
        _LaunchAngle = 0f;
    }

    private void OnEnable()
    {
        _ProjectileStabilizer.rotation = Quaternion.Euler(transform.rotation.eulerAngles + Vector3.up);
    }

}
