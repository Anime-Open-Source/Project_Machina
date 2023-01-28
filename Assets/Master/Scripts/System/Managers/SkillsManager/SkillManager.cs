using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkillManager : SingletonGeneric<SkillManager>
{
    [Header("Config")]
    [SerializeField] private SkillBase _TestSkill;


    private SkillBase _CurrentSkill;
    private float _CurrentSkillTime;
    private GameObject _Sender;


    #region Private Function;

    private void Update()
    {

        if (_CurrentSkill != null)
        {
            if (_CurrentSkillTime >= _CurrentSkill.SkillActiveTime)
            {
                Clear();
                return;
            }

            _CurrentSkillTime += Time.deltaTime;
            _CurrentSkill.Loop(Time.deltaTime);
        }
        


    }

    private void Clear()
    {
        _CurrentSkill.Stop(_Sender);
        _CurrentSkill = null;
        _Sender = null;
        _CurrentSkillTime = 0f;
    }
#endregion

    #region Public Function
    public void ChangeSkill(SkillBase NextSkill, GameObject Sender)
    {

        if (NextSkill == null)
            return;

        if (_CurrentSkill != null)
            _CurrentSkill.Stop(_Sender);

        _Sender = Sender;
        _CurrentSkill = NextSkill;
        _CurrentSkill.Init(Sender);
    }
    #endregion
}
