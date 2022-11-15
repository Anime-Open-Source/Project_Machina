using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class WaveManager : SingletonGeneric<WaveManager>
{
    [Header("Events")]
    [Space(10)]
    public UnityEvent OnWaveStart;
    public UnityEvent OnWaveStop;
    [Header("Settings")]
    [Space(10)]
    [Min(1)]
    [SerializeField] private int _MinWaveNumber;
    [SerializeField] private int _MaxWaveNumber;


    public int CurrentWaveNumber { get { return _MinWaveNumber; } private set { } }

    private int _CurrentWaveNumber;


    public void WaveStart()
    {
        if(_CurrentWaveNumber <= _MaxWaveNumber)
            OnWaveStart.Invoke();
    }

    public void WaveEnd()
    {
        OnWaveStop.Invoke();
    }



    private void OnValidate()
    {
        if (_MaxWaveNumber <= _MinWaveNumber)
            _MaxWaveNumber = _MinWaveNumber + 1;
    }


}
