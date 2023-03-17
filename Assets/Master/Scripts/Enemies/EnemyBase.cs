using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EnemyBase : MonoBehaviour, IDamageable
{
    #region Interface Implementation
    public void DoDamage(float Damage, float Piercing)
    {
        float c_Defense = _Stats.Defense; ;
        float c_Damage = Damage;
        float c_Piercing = Piercing;

        if (_Stats.Health > 0f)
        {
            if (c_Piercing < 0f)
                c_Piercing = 0f;

            c_Defense -= Piercing;

            if (c_Defense <= 0f)
                c_Defense = 0f;

            c_Damage -= c_Defense;

            if (c_Damage <= 0)
                c_Damage = 0;

            _Stats.Health -= c_Damage;

            if(_Stats.Health <= 0f)
            {
                Die();
                return;
            }

            _OnHitEvent.Invoke(transform.position);
        }
        else
            Die();
    }
    #endregion

    public enum UnitType
    {
        None, Ranged, Melee
    }

    [Header("Setup")]
    [SerializeField] private EnemyStats _StatsSO;
    [SerializeField] private Animator _Animator;
    [SerializeField] private AudioSource _audioSource;
    [SerializeField] private UnityEvent<Vector3> _OnHitEvent;
    [SerializeField] private UnityEvent<Vector3> _OnDieEvent;

    private GroupManager _GroupManager;

    private EnemyStats _Stats;

    private void Start()
    {
        if (_Stats)
            Heal(_StatsSO.Health);
        else
            _Stats = Instantiate(_StatsSO);

        Init();
    }

    public UnitType Type;

    public EnemyStats Stats { get { return _Stats; } private set { } }
    public GroupManager MGroupManager { get { return _GroupManager; } private set { } }
    public Animator EnemyAnimator { get { return _Animator; } private set { _Animator = value; } }
    public GroupManager SetGroupManager { get { return _GroupManager; } set { _GroupManager = value; } }

    public AudioSource EnemyAudioSource { get { return _audioSource; } }
    public virtual void AttackTarget(GameObject Target) { }

    private void Heal(float value)
    {
        _Stats.Health = value;
    }

    public virtual void Init()
    {

    }

    public void Kill()
    {
        Die();
    }

    private void Die() 
    {
         
        Debug.Log("Dead");
        _OnDieEvent.Invoke(transform.position);
        GameManager.Instance.AddKill();
        _GroupManager.RemoveFromActiveUnits(this.gameObject);
        _Animator.SetBool("IsDead", true);
        //gameObject.SetActive(false);
    }

    private void OnEnable()
    {
        if (_Stats)
            Heal(_StatsSO.MaxHealth);
        else
            _Stats = Instantiate(_StatsSO);
    }

}
