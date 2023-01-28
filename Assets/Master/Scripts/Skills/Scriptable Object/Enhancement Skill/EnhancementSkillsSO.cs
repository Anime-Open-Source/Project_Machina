using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Enhancement Skill", menuName = "Skill/Enhancement Skill")]
public class EnhancementSkillsSO : SkillBase
{
    #region Interface Implementation
    public override void Init(GameObject contex)
    {
        Debug.Log(string.Format("Enhancment Skill Start {0}", contex.name));
    }

    public override void Loop(float deltaTime)
    {
        Debug.Log(string.Format("Enhancment Skill Looping"));
    }

    public override void Stop(GameObject contex)
    {
        Debug.Log(string.Format("Enhancment Skill Stop {0}", contex.name));
    }
    #endregion

    #region Private Function

    private void EnhanceStats(GameObject Target)
    {
        

        if (!Target.GetComponent<EnemyBase>())
        {
            WeaponBase c_WeaponComponent =  Target.GetComponent<WeaponBase>();

            return;
        }

        EnemyBase c_EnemyComponet = Target.GetComponent<EnemyBase>();

    }

    #endregion

}
