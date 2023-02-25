using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class GameManager : SingletonGeneric<GameManager>
{

    private bool _isGameInProgress;

    private int _score;

    public int PlayerScore { get { return _score; } }

    private bool _IsPaused;

    public UnityEvent OnGamePause;
    public UnityEvent OnGameResume;

    public bool IsGameInProgress { get { return _isGameInProgress; } set { _isGameInProgress = value; } }

    public void PauseGame() 
    {


        if(_IsPaused && _isGameInProgress)
        {
            Time.timeScale = 1.0f;
            OnGameResume.Invoke();
            _IsPaused = false;
        }

        if(!_IsPaused && _isGameInProgress)
        {
            OnGamePause.Invoke();
            Time.timeScale = 0f;
            _IsPaused = true;
        }


            
    }


}
