using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroupManager : MonoBehaviour
{
    [Header("Setup")]
    [SerializeField] GameObject _Player;
    [SerializeField] GameObject _Prefab;
    [SerializeField] int _GroupCount;
    [SerializeField] Vector3 _SpawnArea;
    [Space(5)]
    [Header("Setting")]
    [SerializeField] private bool _RandomSpawn;
    [SerializeField] private float _RotationSpeed;
    [SerializeField] private float _GapDistance;
    [SerializeField] private float _StopDistance;
    [SerializeField] private GameObject[] _AllUnits;

    private Vector3 pos;

    public GameObject Player { get { return _Player; } }
    public GameObject[] Units { get { return _AllUnits; } }
    public float RotationSpeed { get { return _RotationSpeed; } private set { } }
    public float GapDistance { get { return _GapDistance; } private set { } }
    public float StopDistance { get { return _StopDistance; } private set { } }

    private void Start()
    {
        _AllUnits = new GameObject[_GroupCount];
        for (int i = 0; i < _GroupCount; i++)
        {
            if (_RandomSpawn)
            {
                pos = this.transform.position + new Vector3(Random.Range(-_SpawnArea.x, _SpawnArea.x), transform.position.y, Random.Range(-_SpawnArea.z, _SpawnArea.z));
            }
            else
            {
                pos = this.transform.position;
            }
            
            _AllUnits[i] = Instantiate(_Prefab, pos, Quaternion.identity);
            _AllUnits[i].GetComponent<GroundSpider>().SetGroupManager = this;
        }
    }
}
