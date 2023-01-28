using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandAnimationController : MonoBehaviour
{
    [Header("Setup")]
    [Space(10)]
    [SerializeField] private Animator _HandAnimator;
    [Space(20)]
    [Header("Setting")]
    [Space(10)]
    [SerializeField] private float _GripStrength;


    private void CalculateStrength()
    {
        float c_TargetStrength = 0f;


        if (_GripStrength >= c_TargetStrength)
            return;




    }

}
