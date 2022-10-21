using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SwordBladeBase : MonoBehaviour
{
    [SerializeField] private GameObject _ParentSwordObject;
    [SerializeField] private UnityEvent<IDamageable> _OnHitEvent;
    [SerializeField] private Renderer _Material;
    [SerializeField] private Collider _Trigger;

    private bool _CanHit;

    public bool CanHit { get { return _CanHit; } private set { } }

    
    private void OnTriggerEnter(Collider other)
    {
        if (!_CanHit)
            return;


        if (other.transform.parent != null)
        {
            if (other.transform.parent.GetComponent<IDamageable>() != null)
            {
                _OnHitEvent.Invoke(other.transform.parent.GetComponent<IDamageable>());
                _Material.material.color = Color.green;
                _CanHit = false;
            }
        }
        else
        {
            if (other.GetComponent<IDamageable>() != null)
            {
                _OnHitEvent.Invoke(other.GetComponent<IDamageable>());
                _Material.material.color = Color.green;
                _CanHit = false;
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        Debug.Log("Out");
        _Material.material.color = Color.red;
        _CanHit = true;
    }


    private void Update()
    {
        if (!_Trigger.enabled)
        {
            Debug.Log("Out");
            _Material.material.color = Color.red;
            _CanHit = true;
        }

    }

}
