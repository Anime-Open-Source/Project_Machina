using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bow : WeaponBase, IGrabable
{
    [Space(10)]
    [SerializeField] private BowStringVisualizer _Visualizer;
    [SerializeField] private Transform _PullPoint;
    [SerializeField] private float _Charge;


    [Header("Setting")]
    [SerializeField] private float _MinimalPull;
    [SerializeField] private float _Multiplier;
    [SerializeField] private float _SmoothTime;
    //Temporary solution
    [SerializeField] private InteractionManager _InterManager;

    public float Charge { get { return _Charge; } set { _Charge = value; } }
    public float SmoothTime { get { return _SmoothTime; } private set {} }


    public float MinimalPull { get { return _MinimalPull; } private set { } }

    private void Start()
    {
        if (!WeaponCollider)
            Debug.Break();

        _Visualizer.Normalized = _Charge;

        if (WeaponCollider.enabled)
            _PullPoint.gameObject.SetActive(false);

        
    }

    private void Update()
    {
        _Visualizer.Normalized = _Charge * _Multiplier;

        if (IsGrabbed)
        {
            _PullPoint.gameObject.SetActive(true);
            _InterManager.UseRayGrab = false;
        }
        else
        {
            
            _PullPoint.gameObject.SetActive(false);
            _InterManager.UseRayGrab = true;
        }

    }
}
