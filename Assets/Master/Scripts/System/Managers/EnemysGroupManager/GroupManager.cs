using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent(typeof(ObjectPool))]

public class GroupManager : MonoBehaviour
{
    [Header("Setup")]
    [Space(5)]
    [SerializeField] private GameObject _Player;
    [SerializeField] private GameObject[] _Prefab;

    [Min(1)]
    [SerializeField] private int _TotalUnitCount;

    [SerializeField] private List<GameObject> _SpawnPoint = new List<GameObject>();
    [Space(5)]
    [Header("Setting")]
    [Space(5)]

    [Min(1)]
    [Tooltip("Minimum number of Unit per wave")]
    [SerializeField] private int _MinWaveUnitCount;

    [Tooltip("Maximum number of Unit per wave")]
    [SerializeField] private int _MaxWaveUnitCount;

    [Tooltip("Randomize the number of Unit per wave")]
    [SerializeField] private bool _RandomWaveUnitCount;

    [SerializeField] private bool _RandomSpawn;
    [SerializeField] private Vector3 _SpawnArea;
    [SerializeField] private float _GapDistance;
    [SerializeField] private float _StopDistance;
    [SerializeField] private float _RangedDistance;
    [SerializeField] private bool _Test;

    private int _WaveUnitCount;

    private GameObject[] _AllPooledUnits;
    private GameObject[] _CurrentActiveUnits;

    private ObjectPool _Pool;

    private Vector3 pos;

    public GameObject Player { get { return _Player; } }
    public GameObject[] Units { get { return _CurrentActiveUnits; } }
    public float GapDistance { get { return _GapDistance; } private set { } }
    public float StopDistance { get { return _StopDistance; } private set { } }
    public float RangedDistance { get { return _RangedDistance; } private set { } }

    private void Awake()
    {
        Innit();
        SpawnUnits();
    }

    private void SpawnUnits()
    {

        _Pool.PoolObject(_Prefab, gameObject, _TotalUnitCount);

    }

    public void SpawnEnemys()
    {

        if (_RandomWaveUnitCount)
            _WaveUnitCount = Random.Range(_MinWaveUnitCount, _MaxWaveUnitCount);
        else
            _WaveUnitCount = _MaxWaveUnitCount;

        _CurrentActiveUnits = new GameObject[_WaveUnitCount];

        _CurrentActiveUnits = _Pool.GetAllObject(_Prefab);

    }

    private void Innit()
    {
        _Pool = GetComponent<ObjectPool>();

        SpawnUnits();
    }

    private void Update()
    {
        if (_Test)
        {
            SpawnEnemys();
            _Test = false;
        }
    }

    public void ClearEnemys()
    {
        if (_CurrentActiveUnits.Length < 0)
        {
            for (int i = 0; i < _CurrentActiveUnits.Length; i++)
            {
                Destroy(_CurrentActiveUnits[i].gameObject);
            }
        }
    }

    private void OnValidate()
    {
        if (_MaxWaveUnitCount <= _MinWaveUnitCount)
            _MaxWaveUnitCount = _MinWaveUnitCount + 1;
    }

}
