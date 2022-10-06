using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IExecutable
{
    void Init(GameObject contex);
    void Loop(float deltaTime);
    void Stop(GameObject contex);
}
