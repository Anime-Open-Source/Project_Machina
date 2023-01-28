using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "ProjectileSkill", menuName = "Skill/Projectile Skill")]
public class ProjectileSkillSO : SkillBase
{
    [SerializeField] GameObject _Projectile;

    private GameObject _Caller;
    private GameObject c_Projectile;

    private int i = 0;

    private bool _IsActivated;

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
        _IsActivated = false;
    }
    #endregion


    private void LaunchProjectile(Transform LaunchPoint/*, float deltaTime*/)
    {

        if (!LaunchPoint)
            return;

        if (!_IsActivated) 
        {
            c_Projectile = ProjectileManager.Instance.GetProjectile(LaunchPoint, _Projectile);

        }
            
        
        //c_Projectile.transform.Translate(Vector3.forward * deltaTime);

        

        _IsActivated = true;

    }

}
