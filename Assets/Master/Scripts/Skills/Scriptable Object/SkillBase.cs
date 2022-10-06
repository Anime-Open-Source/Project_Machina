using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Skill", menuName = "Skill/New Skill")]
public class SkillBase : ScriptableObject, IExecutable
{
    #region Interface Implementation
    public void Init(GameObject contex)
    {
        Debug.Log(string.Format("Skill Start {0}", contex.name));
    }

    public void Loop(float deltaTime)
    {
        Debug.Log(string.Format("Skill Looping"));
    }

    public void Stop(GameObject contex)
    {
        Debug.Log(string.Format("Skill Stop {0}", contex.name));
    }
    #endregion


    #region Config
    [Header("Configuration")]
    [SerializeField] private string _SkillName;
    [SerializeField] private float _SkillTime;

    public string SkillName { get { return _SkillName; } private set {} }
    public float SkillTime { get { return _SkillTime; } private set {} }
    #endregion
}
