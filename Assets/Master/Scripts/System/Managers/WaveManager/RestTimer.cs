using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class RestTimer : MonoBehaviour
{
    [Header("Events")]
    [Space(10)]
    [SerializeField] public UnityEvent OnRestTimeEnds;
    [Header("Settings")]
    [Space(10)]
    [SerializeField] private float _MaxRestTime;

    private float _CurrentTime;

    private void Update()
    {
        if (_CurrentTime < _MaxRestTime)
            _CurrentTime += Time.deltaTime;

        if (_CurrentTime >= _MaxRestTime)
            OnRestTimeEnds.Invoke();
    }

    public void ResetTimer()
    {
        _CurrentTime = 0f;
    }

}
