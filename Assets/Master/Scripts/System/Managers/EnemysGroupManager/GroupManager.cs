using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(ObjectPool))]

public class GroupManager : MonoBehaviour
{
    [Header("Setup")]
    [Space(5)]
    [SerializeField] private GameObject _Player;
    [SerializeField] private GameObject[] _Prefabs;

    [Min(1)]
    [SerializeField] private int _TotalUnitCount;

    [SerializeField] private List<GameObject> _SpawnPoints = new List<GameObject>();
    [Space(5)]
    [Header("Events")]
    [Space(5)]
    public UnityEvent OnActiveUniteEmptyEvent;
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
    [SerializeField] private float _RangedAttackDistance;
    [SerializeField] private bool _Test;

    private int _WaveUnitCount;

    private List<GameObject> _ActiveUnits = new List<GameObject>();

    private ObjectPool _Pool;

    public GameObject Player { get { return _Player; } }
    public List<GameObject> Units { get { return _ActiveUnits; } }
    public float GapDistance { get { return _GapDistance; } private set { } }
    public float StopDistance { get { return _StopDistance; } private set { } }
    public float RangedDistance { get { return _RangedAttackDistance; } private set { } }


    public void RemoveFromActiveUnits(GameObject enemyGameObject)
    {
        if (_ActiveUnits.Count <= 0)
            return;

       _ActiveUnits.Remove(enemyGameObject);

    }

    private void OnActiveUnitsEmpty()
    {

    }

    private void Awake()
    {
        Innit();
        PoolUnits();
    }

    private void PoolUnits()
    {

        _Pool.PoolObject(_Prefabs, gameObject, _TotalUnitCount);

    }

    public void SetActiveEnemys()
    {

        if (_RandomWaveUnitCount)
            _WaveUnitCount = Random.Range(_MinWaveUnitCount, _MaxWaveUnitCount);
        else
            _WaveUnitCount = _MaxWaveUnitCount;

        _ActiveUnits = _Pool.GetAllObject(_Prefabs, _WaveUnitCount);

        for (int i = 0; i < _ActiveUnits.Count; i++)
        {
            if (!_ActiveUnits[i].GetComponent<Crawler>())
            {
                _ActiveUnits[i].GetComponent<Cannoneer>().SetGroupManager = this;
                continue;
            }

            _ActiveUnits[i].GetComponent<Crawler>().SetGroupManager = this;

        }

        SpawnUnit();


    }

    private void SpawnUnit()
    {
        for (int i = 0; i < _ActiveUnits.Count; i++)
        {
            _ActiveUnits[i].transform.position = _SpawnPoints[Random.Range(0, _SpawnPoints.Count)].transform.position;
            _ActiveUnits[i].SetActive(true);
        }
    }

    private void Innit()
    {
        _Pool = GetComponent<ObjectPool>();

        PoolUnits();
    }



    //Delete after development
    private void Update()
    {
        if (_Test)
        {
            SetActiveEnemys();
            _Test = false;
        }
    }

    public void ClearEnemys()
    {
        if (_ActiveUnits.Count <= 0)
            return;

        for (int i = 0; i < _ActiveUnits.Count; i++)
        {
            _ActiveUnits[i].gameObject.SetActive(false);
            _ActiveUnits.Remove(_ActiveUnits[i]);
        }
    }

    private void OnValidate()
    {
        if (_MaxWaveUnitCount <= _MinWaveUnitCount)
            _MaxWaveUnitCount = _MinWaveUnitCount + 1;
    }

}
