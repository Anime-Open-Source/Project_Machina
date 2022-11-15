using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkillManager : MonoBehaviour
{
    [Header("Config")]
    [Tooltip("Used this button to check if function work correctly")]
    [SerializeField] private bool _Activate;
    [SerializeField] private SkillBase _TestSkill;


    private SkillBase _CurrentSkill;
    private float _CurrentSkillTime;
    private GameObject _Sender;


    #region Private Function;

    //Make singleton?

    private void Update()
    {

        if (_Activate)
        {
            ChangeSkill(_TestSkill, gameObject);
        }

        if (_CurrentSkill != null)
        {
            if (_CurrentSkillTime >= _CurrentSkill.SkillTime)
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
            _CurrentSkill.Stop(Sender);

        _Sender = Sender;
        _CurrentSkill = NextSkill;
        _CurrentSkill.Init(Sender);
    }
    #endregion
}
