using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NextBlock : MonoBehaviour
{
    public int blockIndex = 0;
    public Sprite renderSprite;
    public string current;
    public Image one;
    public Image two;
    public Image three;


    public static NextBlock Instance;
    // Start is alled before the first frame update
    void Awake()
    {
        Instance = this;
    }

    // Update is called once per frame
  

    void Update()
    {
               

    }

    public void updateImages()
    {
        Queue<int> inputBlocks = new Queue<int>(BlockGenerator.Instance.blockQueue);
        
        var temp = inputBlocks.Dequeue();
        one.sprite = BlockGenerator.Instance.blockArray[temp].GetComponent<SpriteRenderer>().sprite;
        one.color = BlockGenerator.Instance.blockArray[temp].GetComponent<SpriteRenderer>().color;
        temp = inputBlocks.Dequeue();
        two.sprite = BlockGenerator.Instance.blockArray[temp].GetComponent<SpriteRenderer>().sprite;
        two.color = BlockGenerator.Instance.blockArray[temp].GetComponent<SpriteRenderer>().color;
        temp = inputBlocks.Dequeue();
        three.sprite = BlockGenerator.Instance.blockArray[temp].GetComponent<SpriteRenderer>().sprite;
        three.color = BlockGenerator.Instance.blockArray[temp].GetComponent<SpriteRenderer>().color;

    }

}
