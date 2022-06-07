using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class PauseMenu : MonoBehaviour
{
    public GameObject pauseMenu;
    private GameObject[] destroyBlocks;
    public AudioClip transitionClip;
    public bool isPaused;
    
    void Start()
    {   
        pauseMenu.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.P))
        {
            if(isPaused)
            {
                ResumeGame();
            }
            else
            {
                PauseGame();
            }
        }
        if(Input.GetKeyDown(KeyCode.R))
        {
        Time.timeScale = 1f;
        isPaused = false;
        DestroyBlocks();
        }
    }

    public void PauseGame()
    {
        pauseMenu.SetActive(true);
        Time.timeScale = 0f;
        isPaused = true;
    }

    public void ResumeGame()
    {
        pauseMenu.SetActive(false);
        Time.timeScale = 1f;
        isPaused = false;
    }

    public void GoToMenu()
    {
        MusicManager.Instance.ChangeClip(transitionClip);
        SceneManager.LoadScene("Title");
        Time.timeScale = 1f;
    }

    public void Restart()
    {
        Time.timeScale = 1f;
        isPaused = false;
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void DestroyBlocks()
    {
        destroyBlocks = GameObject.FindGameObjectsWithTag("Blocks");
        for(int i= 0; i < destroyBlocks.Length; i++)
        {
            GameObject.Destroy(destroyBlocks[i]);
        }
        BlockDropper.inst.DropBlock();
    }
}
