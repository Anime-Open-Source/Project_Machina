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
    [SerializeField] private Canvas _Canvas;
    [SerializeField] private List<GameObject> WeaponsPrefabs = new List<GameObject>();
    [SerializeField] private List<Image> _UIImage = new List<Image>();
    [Header("Events")]
    public UnityEvent OnClickEvent;
    [Header("Setting")]
    [Range(0f, 1f)]
    [SerializeField] private float _Radius;
    [SerializeField] private Vector3 _Offests;
    
    
    private float _Degrees;

    private void Update()
    {
        transform.position = _ParentHandTransform.position + _Offests;

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

            Vector3 _ButtomOffsets = new Vector3(SinX, 0f, CosZ) + transform.position;

            _UIImage[i].rectTransform.position = _ButtomOffsets;
            Vector3 c_Look = _ButtomOffsets - transform.position;
            _UIImage[i].transform.rotation = Quaternion.LookRotation(Vector3.down, c_Look);



            _Degrees += c_Const / NumberOfButton;
            

        }

        

    }


    public void SpawnWeapon()
    {

    }

    private void OnValidate()
    {

        transform.position = _ParentHandTransform.position + _Offests;

        _Canvas.transform.position = transform.position;

        for (int i = 0; i < _UIImage.Count; i++)
        {
            _UIImage[i].rectTransform.position = Vector3.zero;
        }

        CalculateOffsetsAngle(_UIImage.Count);
    }

}
