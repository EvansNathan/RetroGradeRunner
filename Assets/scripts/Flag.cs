using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Flag : MonoBehaviour
{
    private SpriteRenderer sr;
    private bool isActive = false;
    public Sprite activeSprite;
    public AudioSource audioSource;

    private void Awake()
    {
        sr = GetComponent<SpriteRenderer>();
    }

   private void OnTriggerEnter2D(Collider2D col)
    {
        if (!isActive && col.gameObject.CompareTag("Player"))
        {
            Debug.Log("CHECKPOINT");
            sr.sprite = activeSprite;
            GameState.Instance.respawnPoint = this.gameObject;
            audioSource.Play();
            isActive = true;
        }
    }
}
