using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;


public class BlockGenerator : MonoBehaviour
{
    public static BlockGenerator Instance;
    
    public Queue<int> blockQueue;

    public int desiredQueueSize;
    public List<GameObject> blockArray;

    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(this);
        }
        Instance = this;
        blockQueue = new Queue<int>();
        GenerateNew();
    }

    private void Update()
    {
        if (blockQueue.Count < desiredQueueSize)
        {
            GenerateNew();
        } else if (blockQueue.Count == desiredQueueSize)
        {
            NextBlock.Instance.updateImages();
        }
    }

    public void GenerateNew()
    {
        int temp = Random.Range(0, 6);
        blockQueue.Enqueue(temp);
    }

    public void Remove()
    {
        int temp = blockQueue.Dequeue();
    }

    public GameObject GetNext()
    {
        return blockArray[blockQueue.Peek()];
    }
}
