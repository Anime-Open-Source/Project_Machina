using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroupManager : MonoBehaviour
{
    [Header("Setup")]
    [SerializeField] private GameObject _Player;
    [SerializeField] private List<GameObject> _Prefab = new List<GameObject>();
    [SerializeField] private int _GroupCount;
    [SerializeField] private List<GameObject> _SpawnPoint = new List<GameObject>();
    [Space(5)]
    [Header("Setting")]
    [SerializeField] private bool _RandomSpawn;
    [SerializeField] private Vector3 _SpawnArea;
    [SerializeField] private float _GapDistance;
    [SerializeField] private float _StopDistance;
    [SerializeField] private float _RangedDistance;
    [SerializeField] private GameObject[] _AllUnits;

    private Vector3 pos;

    public GameObject Player { get { return _Player; } }
    public GameObject[] Units { get { return _AllUnits; } }
    public float GapDistance { get { return _GapDistance; } private set { } }
    public float StopDistance { get { return _StopDistance; } private set { } }
    public float RangedDistance { get { return _RangedDistance; } private set { } }

    private void Start()
    {
        _AllUnits = new GameObject[_GroupCount];
        for (int i = 0; i < _GroupCount; i++)
        {
            if (_RandomSpawn)
            {
                pos = _SpawnPoint[Random.Range(0, _SpawnPoint.Count)].transform.position + new Vector3(Random.Range(-_SpawnArea.x, _SpawnArea.x), transform.position.y, Random.Range(-_SpawnArea.z, _SpawnArea.z));
            }
            else
            {
                pos = _SpawnPoint[0].transform.position;
            }
            
            _AllUnits[i] = Instantiate(_Prefab[Random.Range(0, _Prefab.Count)], pos, Quaternion.identity);
            if (_AllUnits[i].GetComponent<Crawler>() != null)
            {
                _AllUnits[i].GetComponent<Crawler>().SetGroupManager = this;
            }
            else
            {
                _AllUnits[i].GetComponent<Cannoneer>().SetGroupManager = this;
            }
            
        }
    }
}
