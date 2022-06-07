using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class OnlyVisibleInEditor : MonoBehaviour
{
    private void Awake()
    {
        Destroy(GetComponent<SpriteRenderer>());
    }
}