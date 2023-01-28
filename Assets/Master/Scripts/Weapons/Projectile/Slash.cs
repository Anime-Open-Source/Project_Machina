using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Slash : MonoBehaviour
{

    public UnityEvent _OnEndEvent;

    private ParticleSystem _ParticleSystem;

    private float _ParticleLifeTime;

    private void Start()
    {
        Innit();
    }

    private void Update()
    {
        if (_ParticleLifeTime <= 0f)
        {
            _OnEndEvent.Invoke();
            gameObject.SetActive(false);
            ResetValue();
            return;
        }

        _ParticleLifeTime -= Time.deltaTime;
        transform.Translate(Vector3.forward * Time.deltaTime);
    }

    private void ResetValue()
    {
        _ParticleLifeTime = _ParticleSystem.main.startLifetimeMultiplier;
    }

   

    private void Innit()
    {
        if (!_ParticleSystem)
        {
            _ParticleSystem = GetComponent<ParticleSystem>();
            if (!_ParticleSystem)
            {
                _ParticleSystem = GetComponentInChildren<ParticleSystem>();
            }
        }


        _ParticleLifeTime = _ParticleSystem.main.startLifetimeMultiplier;

    }
}
