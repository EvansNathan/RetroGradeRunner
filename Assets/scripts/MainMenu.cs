using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public AudioClip transitionClip;

    private void Start()
    {
        MusicManager.Instance.GetComponent<AudioSource>().Play();
    }

    void Update()
    {
        if(Input.GetKeyUp(KeyCode.Space))
        {
            Debug.Log("SPACE");
            MusicManager.Instance.ChangeClip(transitionClip);
            SceneManager.LoadScene("NateScene");
            Time.timeScale = 1f;
        }

        if (Input.GetKeyUp(KeyCode.C))
        {
            Debug.Log("C");
            SceneManager.LoadScene("Credits");
            Time.timeScale = 1f;
        }
    }
}
