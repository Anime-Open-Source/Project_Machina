using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventTargetTest : MonoBehaviour
{
    public void SpawnTarget(GameObject target)
    {
        target.transform.position = transform.position;
    }
}
