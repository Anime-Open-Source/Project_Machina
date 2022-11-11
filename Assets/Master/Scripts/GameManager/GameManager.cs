using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [Header("Lists")]
    public List<GameObject> SpawnedWeapons = new List<GameObject>();

    private static GameManager _Instance;
    public static GameManager Instance { get { return _Instance; } set { _Instance = value; } }

    private void Start()
    {
        if (Instance != null)
            return;

        Instance = this;

        DontDestroyOnLoad(Instance);
    }


    public void ClearWeapons()
    {
        if (SpawnedWeapons.Count <= 0)
            return;

        for (int i = 0; i < SpawnedWeapons.Count; i++)
        {
            Destroy(SpawnedWeapons[i].gameObject);

        }
    }

}
