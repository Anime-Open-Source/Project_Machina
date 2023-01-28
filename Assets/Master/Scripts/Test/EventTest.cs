using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EventTest : MonoBehaviour
{
    public bool _click;
    public UnityEvent<GameObject> _OnClick;
    public GameObject _prefab;

    // Update is called once per frame
    void Update()
    {
        GameObject gameObject = _prefab;
        if (_click)
        {
            _OnClick.Invoke(gameObject);
            _click = false;

        }
    }
}
