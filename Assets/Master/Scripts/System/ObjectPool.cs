using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPool : MonoBehaviour
{
    private int _PoolCount = 0;

    private Dictionary<string, List<GameObject>> _PooledObjects = new Dictionary<string, List<GameObject>>();

    private List<GameObject> c_PooledObjectList = new List<GameObject>();

    #region Spawn Object Functions

    /// <summary>
    /// Spawn Object to be Pooled
    /// </summary>
    /// <param name="ObjectToPool"></param>
    /// <param name="ParentObject"></param>
    private void SpawnObject(GameObject ObjectToPool, GameObject ParentObject)
    {
        GameObject c_Projectile;

        for (int i = 0; i < _PoolCount; i++)
        {
            c_Projectile = Instantiate(ObjectToPool, transform.position, Quaternion.identity);
            c_Projectile.transform.SetParent(ParentObject.transform);
            c_Projectile.SetActive(false);

            if (!_PooledObjects.ContainsKey(ObjectToPool.name))
            {
                c_PooledObjectList.Clear();
                c_PooledObjectList.Add(c_Projectile);
                _PooledObjects.Add(ObjectToPool.name, c_PooledObjectList);
                continue;
            }

            c_PooledObjectList.Add(c_Projectile);
            _PooledObjects[ObjectToPool.name] = c_PooledObjectList;

        }

        //foreach (KeyValuePair<string, List<GameObject>> entry in _PooledObjects)
        //{

        //    Debug.Log(string.Format("Key {0}, Value {1}", entry.Key, entry.Value));

        //    for (int i = 0; i < entry.Value.Count; i++)
        //    {
        //        Debug.Log(entry.Value[i].name);
        //    }

        //}

    }
    #endregion

    #region Get Pooled Object
    /// <summary>
    /// Get Pooled Object of the Specified Type
    /// </summary>
    /// <param name="ObjectToGet"></param>
    /// <returns></returns>
    public GameObject GetObject(GameObject ObjectToGet)
    {

        if (!_PooledObjects.ContainsKey(ObjectToGet.name))
            return null;

        foreach (KeyValuePair<string, List<GameObject>> entry in _PooledObjects)
        {
            if (entry.Key != ObjectToGet.name)
                continue;

            for (int i = 0; i < entry.Value.Count; i++)
            {
                Debug.Log(entry.Value[i].name);

                if(!entry.Value[i].activeInHierarchy)
                {
                    entry.Value[i].SetActive(true);
                    return entry.Value[i];
                }
            }
        }

        return null;
    }
    #endregion

    #region Pool Objects Functions



    /// <summary>
    /// Pool the specified Objects, Assign the Object to a Parent, How many of the Object to pooled
    /// </summary>
    /// <param name="ObjectToPool"></param>
    /// <param name="ParentGameObject"></param>
    /// <param name="PoolCount"></param>
    public void PoolObject(GameObject ObjectToPool, GameObject ParentGameObject, int PoolCount = 1)
    {
        _PoolCount = PoolCount;


        SpawnObject(ObjectToPool, ParentGameObject);

    }

    

    /// <summary>
    /// Pool all of the Objects inside the Array, Assign the Object to a Parent, How many of each Object type to pooled
    /// </summary>>
    /// <param name="ObjectsToPool"></param>
    /// <param name="ParentGameObject"></param>
    /// <param name="PoolCount"></param>
    public void PoolObject(GameObject[] ObjectsToPool, GameObject ParentGameObject, int PoolCount = 1)
    {
        _PoolCount = PoolCount;

        for (int i = 0; i < ObjectsToPool.Length; i++)
        {
            SpawnObject(ObjectsToPool[i], ParentGameObject);
        }

    }
    #endregion
}
