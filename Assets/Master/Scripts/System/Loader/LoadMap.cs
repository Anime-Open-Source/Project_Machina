using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadMap : MonoBehaviour
{
    [SerializeField] private string _sceneName;
    private void Start()
    {
        SceneManager.LoadSceneAsync(sceneName:_sceneName, LoadSceneMode.Additive);
        SceneManager.SetActiveScene(SceneManager.GetSceneByBuildIndex(2));
    }
}
