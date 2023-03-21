using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadMap : MonoBehaviour
{
    [SerializeField] private string _sceneName;
    private void Awake()
    {
        if (SceneManager.GetSceneByName(_sceneName).isLoaded)
            return;

        StartCoroutine(LoadScene(_sceneName, LoadSceneMode.Additive));

        //SceneManager.LoadSceneAsync(sceneName:_sceneName, LoadSceneMode.Additive);
        //SceneManager.SetActiveScene(SceneManager.GetSceneByName(_sceneName));
    }

    private IEnumerator LoadScene(string sceneName, LoadSceneMode loadSceneMode)
    {
        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(sceneName, loadSceneMode);
        asyncOperation.allowSceneActivation = false;

        while (!asyncOperation.isDone)
        {

            Debug.Log(asyncOperation.progress);

            if (asyncOperation.progress >= 0.9f)
            {
                Debug.Log(1f);
                asyncOperation.allowSceneActivation = true;

            }
            yield return null;
        }
        SceneManager.SetActiveScene(SceneManager.GetSceneByName(sceneName));


    }
}
