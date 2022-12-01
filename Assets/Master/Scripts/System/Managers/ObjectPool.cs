using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPool : MonoBehaviour
{
    private int _PoolCount = 0;

    private Dictionary<string, GameObject> _PooledObjects = new Dictionary<string, GameObject>();

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
                _PooledObjects.Add(ObjectToPool.name, c_Projectile);
                continue;
            }

            _PooledObjects[ObjectToPool.name] = c_Projectile;
        }
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

        foreach (KeyValuePair<string, GameObject> entry in _PooledObjects)
        {
            if (entry.Key != ObjectToGet.name)
                continue;

            if (!entry.Value.activeInHierarchy)
            {
                entry.Value.SetActive(true);
                return entry.Value;
            }
        }

        return null;
    }
    #endregion

    #region Pool Objects Functions



    /// <summary>
    /// Pool the spesified Object
    /// </summary>
    /// <param name="ObjectToPool"></param>
    /// <param name="ParentGameObject"></param>
    /// <param name="PoolCount"></param>
    public void PooledObject(GameObject ObjectToPool, GameObject ParentGameObject, int PoolCount = 1)
    {
        _PoolCount = PoolCount;


        SpawnObject(ObjectToPool, ParentGameObject);


    }

    /// <summary>
    /// Pool more than one Objects
    /// </summary>
    /// <param name="ObjectsToPool"></param>
    /// <param name="ParentGameObject"></param>
    /// <param name="PoolCount"></param>
    public void PooledObject(GameObject[] ObjectsToPool, GameObject ParentGameObject, int PoolCount = 1)
    {
        _PoolCount = PoolCount;

        for (int i = 0; i < ObjectsToPool.Length; i++)
        {
            SpawnObject(ObjectsToPool[i], ParentGameObject);
        }

    }
    #endregion
}
