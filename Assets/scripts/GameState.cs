using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameState : MonoBehaviour
{
    public static GameState Instance;    
    public GameObject playerRef;
    public GameObject respawnPoint;
    public List<bool> collectibles; 
    public int PlayerHealth = 5;

    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(this);
        }

        Instance = this;
        collectibles.Capacity = 5;
        playerRef = GameObject.FindGameObjectWithTag("Player");
    }

    void Update()
    {
        if (Input.GetButtonUp("Reset"))
        {
            playerRef.transform.position = respawnPoint.transform.position;
        }
    }
    
}
