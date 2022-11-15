using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class GameManager : SingletonGeneric<GameManager>
{
    private bool _IsPaused;

    public void PauseGame() 
    {

        if (_IsPaused)
        {
            Time.timeScale = 1.0f;
            _IsPaused = false;
        }

        else
        {
            Time.timeScale = 0f;
            _IsPaused = true;
        }
            
    }


}
