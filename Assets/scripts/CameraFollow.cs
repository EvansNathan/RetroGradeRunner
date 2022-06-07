using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{

    public Transform target;
    public float smooth;
    public float leadDistance;

    void Update()
    {
        Vector3 tgtPos = new Vector3(target.position.x, target.position.y, transform.position.z);
        
        transform.position = Vector3.Lerp(transform.position, tgtPos, Time.deltaTime * smooth);
    }
}
