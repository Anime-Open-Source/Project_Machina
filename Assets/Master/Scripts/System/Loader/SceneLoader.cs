using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    [SerializeField] private string _mapSceneNameToLoad;
    [SerializeField] private string _currentMapName;
    

    public void LoadGameScene()
    {

        if (!SceneManager.GetSceneByName(_mapSceneNameToLoad).IsValid())
        {
            StartCoroutine(LoadScene(_mapSceneNameToLoad, LoadSceneMode.Additive));
        }

    }

    private IEnumerator LoadScene(string sceneName, LoadSceneMode loadSceneMode)
    {
        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(sceneName, loadSceneMode);
        asyncOperation.allowSceneActivation = false;

        while (!asyncOperation.isDone)
        {

            Debug.Log(asyncOperation.progress);

            if(asyncOperation.progress >= 0.9f)
            {
                Debug.Log(1f);
                asyncOperation.allowSceneActivation = true;
                
            }
            yield return null;
        }
        //SceneManager.SetActiveScene(SceneManager.GetSceneByName(sceneName));
        Time.timeScale = 1f;
        UnloadScene(SceneManager.GetSceneByName(_currentMapName));


    }

    private void UnloadScene(Scene scene)
    {
        if (scene == null)
            return;

        SceneManager.UnloadSceneAsync(scene.name.ToString());

    }

}
