using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroupManager : MonoBehaviour
{
    [Header("Setup")]
    [Space(5)]
    [SerializeField] private GameObject _Player;
    [SerializeField] private List<GameObject> _Prefab = new List<GameObject>();

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

    private int _WaveUnitCount;

    private GameObject[] _AllPooledUnits;
    private GameObject[] _CurrentActiveUnits;

    

    private Vector3 pos;

    public GameObject Player { get { return _Player; } }
    public GameObject[] Units { get { return _CurrentActiveUnits; } }
    public float GapDistance { get { return _GapDistance; } private set { } }
    public float StopDistance { get { return _StopDistance; } private set { } }
    public float RangedDistance { get { return _RangedDistance; } private set { } }

    private void Awake()
    {
        SpawnUnits();
    }

    private void SpawnUnits()
    {
        _AllPooledUnits = new GameObject[_TotalUnitCount];
        for (int i = 0; i < _TotalUnitCount; i++)
        {

            #region Randomize Spawn Point
            if (_RandomSpawn)
            {
                pos = _SpawnPoint[Random.Range(0, _SpawnPoint.Count)].transform.position + new Vector3(Random.Range(-_SpawnArea.x, _SpawnArea.x), transform.position.y, Random.Range(-_SpawnArea.z, _SpawnArea.z));
            }
            else
            {
                pos = _SpawnPoint[0].transform.position;
            }
            #endregion
  
            #region Instantiate
            _AllPooledUnits[i] = Instantiate(_Prefab[Random.Range(0, _Prefab.Count)], pos, Quaternion.identity);
            if (_AllPooledUnits[i].GetComponent<Crawler>() != null)
            {
                _AllPooledUnits[i].GetComponent<Crawler>().SetGroupManager = this;
            }
            else
            {
                _AllPooledUnits[i].GetComponent<Cannoneer>().SetGroupManager = this;
            }
            #endregion

            _AllPooledUnits[i].SetActive(false);

        }
    }

    public void SpawnEnemys()
    {

        if (_RandomWaveUnitCount)
            _WaveUnitCount = Random.Range(_MinWaveUnitCount, _MaxWaveUnitCount);
        else
            _WaveUnitCount = _MaxWaveUnitCount;

        _CurrentActiveUnits = new GameObject[_WaveUnitCount];
        
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


    private void Update()
    {
        
    }

    private void OnValidate()
    {
        if (_MaxWaveUnitCount <= _MinWaveUnitCount)
            _MaxWaveUnitCount = _MinWaveUnitCount + 1;
    }

}
