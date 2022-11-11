using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class WeaponSelector : MonoBehaviour
{
    [Header("Setup")]
    [Space(5)]
    [SerializeField] private Transform _ParentHandTransform;
    [SerializeField] private Transform _WeaponSpawnPoint;
    [SerializeField] private Canvas _Canvas;
    [SerializeField] private List<GameObject> _WeaponsPrefabs = new List<GameObject>();
    [SerializeField] private List<Image> _UIImage = new List<Image>();

    [Header("Setting")]
    [Range(0f, 1f)]
    [SerializeField] private float _Radius;

    private Vector3 _Offsets;

    private float _Degrees;

    private void Start()
    {
        _Offsets = transform.position - _ParentHandTransform.position;
    }

    private void Update()
    {

        _Canvas.transform.position = transform.position;

        for (int i = 0; i < _UIImage.Count; i++)
        {
            _UIImage[i].rectTransform.position = Vector3.zero;
        }

        CalculateOffsetsAngle(_UIImage.Count);
    }


    private void CalculateOffsetsAngle(int NumberOfButton)
    {

        for (int i = 0; i < NumberOfButton; i++)
        {

            float c_Const = 360f;


            float SinX = Mathf.Sin(_Degrees * Mathf.Deg2Rad) * _Radius;
            float CosZ = Mathf.Cos(_Degrees * Mathf.Deg2Rad) * _Radius;

            Vector3 _ButtomOffsets = new Vector3(0f, SinX, CosZ);

            Vector3 c_GlobalTranslate = transform.TransformPoint(_ButtomOffsets);

            _UIImage[i].transform.position = c_GlobalTranslate;
            Vector3 c_Look = c_GlobalTranslate - transform.position;
            _UIImage[i].transform.rotation = Quaternion.LookRotation(transform.right, c_Look);



            _Degrees += c_Const / NumberOfButton;
            

        }

        

    }

    public void SpawnWeapon(GameObject WeaponName)
    {
        for (int i = 0; i < _WeaponsPrefabs.Count; i++)
        {

            if(_WeaponsPrefabs[i].gameObject == WeaponName)
            {
                if (GameManager.Instance.SpawnedWeapons.Contains(_WeaponsPrefabs[i].gameObject))
                    return;

                if (GameManager.Instance.SpawnedWeapons.Count > 0)
                    GameManager.Instance.ClearWeapons();

                GameManager.Instance.SpawnedWeapons.Add(Instantiate(_WeaponsPrefabs[i].gameObject, _WeaponSpawnPoint.position, _WeaponSpawnPoint.rotation));
                return;
            }

        }
    }

    private void OnValidate()
    {

        _Canvas.transform.position = transform.position;

        for (int i = 0; i < _UIImage.Count; i++)
        {
            _UIImage[i].rectTransform.position = Vector3.zero;
        }

        CalculateOffsetsAngle(_UIImage.Count);
    }

}
