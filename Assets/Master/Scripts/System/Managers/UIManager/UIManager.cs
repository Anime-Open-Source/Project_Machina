using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    [Header("Setup")]
    [Space(10)]
    [SerializeField] private Transform _playerTransform;


    private int _FinnalScore;

    public int FinnalScore { get { return _FinnalScore; } set { _FinnalScore = value; } }
}
