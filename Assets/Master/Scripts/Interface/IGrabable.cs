using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IGrabable
{
    public void Grabed(GameObject Hand);
    public void Detached(GameObject Hand);
}
