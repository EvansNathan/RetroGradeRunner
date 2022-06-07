using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicManager : MonoBehaviour
{
    public static MusicManager Instance;
    private AudioSource audioSource;
    
    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this.gameObject);
        }

        Instance = this;
        DontDestroyOnLoad(this);
        
    }

    private void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }

    public void ChangeClip(AudioClip clip)
    {
        audioSource.clip = clip;
    }
}
