using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockDropper : MonoBehaviour
{
    public static BlockDropper inst;
    public GameObject dropPoint;
    public GameObject followTarget;
   // public GameObject UISprite;


    // Start is called before the first frame update
    void Start()
    {
        inst = this;
       // UISprite = Instantiate(NextBlock);
        Invoke("DropBlock", 5);
    }

    private void Update()
    {
        BlockDropper.inst.transform.position = new Vector3(
            followTarget.transform.position.x,
            followTarget.transform.position.y + 10,
            BlockDropper.inst.transform.position.z);
    }

    public void DropBlock()
    {
        Instantiate(BlockGenerator.Instance.GetNext(), dropPoint.GetComponent<Transform>().localPosition, Quaternion.identity);
        BlockGenerator.Instance.Remove();
    }
}
