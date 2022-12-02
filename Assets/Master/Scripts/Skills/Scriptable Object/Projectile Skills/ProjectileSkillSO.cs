using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "ProjectileSkill", menuName = "Skill/Projectile Skill")]
public class ProjectileSkillSO : SkillBase
{
    [SerializeField] GameObject _Projectile;

    private GameObject _Caller;

    #region Interface Implementation
    public override void Init(GameObject contex)
    {
        Debug.Log(string.Format("Projectile Skill Start {0}", contex.name));
        _Caller = contex;
    }

    public override void Loop(float deltaTime)
    {
        Debug.Log(string.Format("Projectile Skill Looping"));
        LaunchProjectile(_Caller.transform);
    }

    public override void Stop(GameObject contex)
    {
        Debug.Log(string.Format("Projectile Skill Stop {0}", contex.name));
        _Caller = null;
    }
    #endregion


    private void LaunchProjectile(Transform LaunchPoint)
    {
        if (!LaunchPoint)
            return;

        GameObject c_Projectile;

        c_Projectile = ProjectileManager.Instance.GetProjectile(LaunchPoint, _Projectile);
        c_Projectile.transform.Translate(Vector3.forward * Time.deltaTime);

    }

}
