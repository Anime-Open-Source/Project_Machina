using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElementsBase : ScriptableObject
{
    [SerializeField] private string _ElementName;
    [SerializeField] private EntityStats _Stats;

    public EntityStats Stats { get { return _Stats; } }

    public virtual void Effect(GameObject Target)
    {

    }


}
