using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkillBase : ScriptableObject, IExecutable
{
    #region Interface Implementation
    public virtual void Init(GameObject contex)
    {
        Debug.Log(string.Format("Skill Start {0}", contex.name));
    }

    public virtual void Loop(float deltaTime)
    {
        Debug.Log(string.Format("Skill Looping"));
    }

    public virtual void Stop(GameObject contex)
    {
        Debug.Log(string.Format("Skill Stop {0}", contex.name));
    }
    #endregion

    #region Config
    [Header("Configuration")]
    [SerializeField] private string _SkillName;
    [SerializeField] private float _SkillActiveTime;

    public string SkillName { get { return _SkillName; } private set {} }
    public float SkillActiveTime { get { return _SkillActiveTime; } private set {} }
    #endregion
}
