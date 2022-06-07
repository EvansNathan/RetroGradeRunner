using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cartridge : MonoBehaviour
{
    public float spinSpeed;
    public int index;
    public AudioSource audioSource;
    public GameObject particles;
    void Update()
    {
        transform.Rotate(0, spinSpeed * Time.deltaTime , 0 , Space.Self);
    }

    private void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.CompareTag("Player"))
        {
            Instantiate(particles, transform);
            GameState.Instance.collectibles[index] = true;
            UIMgr.inst.updateCart(index);
            audioSource.Play();
            Destroy(this.gameObject);
            //Destroy(particle);
        }
    }

    


}
