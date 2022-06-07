using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinScript : MonoBehaviour
{
    private AudioSource audioSource;
    public GameObject audioPlayer;
    private void Awake()
    {
        audioSource = audioPlayer.GetComponent<AudioSource>();
    }

    private void OnTriggerEnter2D(Collider2D col)
    {
        if(col.gameObject.CompareTag("Player"))
        {
            UIMgr.inst.creditCount += 1;
            audioSource.Play();
            Destroy(this.gameObject);
        }
    }
}
