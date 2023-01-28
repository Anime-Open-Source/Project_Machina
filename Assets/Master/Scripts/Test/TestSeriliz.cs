using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestSeriliz : MonoBehaviour
{
    [System.Serializable]
    public struct PlayerStats
    {
        public int movementSpeed;
        public int hitPoints;
        public bool hasHealthPotion;
    }

    //Make the private field of our PlayerStats struct visible in the Inspector
    //by applying [SerializeField] attribute to it
    [SerializeField]
    private PlayerStats stats;
}
