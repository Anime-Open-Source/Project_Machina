using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class RestTimerUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI[] _textMeshPros;
    [SerializeField] private RestTimer _restTimer;


    private void Update()
    {
        int c_int = Mathf.FloorToInt(_restTimer.GetRemainingTime());


        foreach (TextMeshProUGUI tm in _textMeshPros)
        {
            tm.text = c_int.ToString();
        }

        
    }

}
