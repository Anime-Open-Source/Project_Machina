using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class FadeUI : MonoBehaviour
{
    [SerializeField] private Animator _animator;

    public void FadeOut()
    {
        _animator.SetTrigger("Fade");

    }
}
