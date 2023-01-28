using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class GameOverUI : MonoBehaviour
{
    [Header("Setup")]
    [SerializeField] private TextMeshProUGUI _ScoreText;

    private int _FinnalScore;

    private void ChangeScoreText()
    {
        _ScoreText.text = _FinnalScore.ToString();
    }

}
