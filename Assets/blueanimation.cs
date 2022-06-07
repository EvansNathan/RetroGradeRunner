using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class blueanimation : MonoBehaviour
{
    public float timer;
    Vector3 startingPos;
    public SpriteRenderer Srender;
    public Color randColor;
    private BoxCollider2D bc;
    public AudioClip transitionClip;

    public float H;
    public float S;
    public float V;
    // Start is called before the first frame update
    void Start()
    {
        Srender = GetComponent<SpriteRenderer>();
        bc = GetComponent<BoxCollider2D>();
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(new Vector3(0, -120, 0) * Time.deltaTime);
    }

    private void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.CompareTag("Player"))
        {
            Debug.Log("END!");
            MusicManager.Instance.ChangeClip(transitionClip);
            SceneManager.LoadScene("EndScene");
        }
    }
}

