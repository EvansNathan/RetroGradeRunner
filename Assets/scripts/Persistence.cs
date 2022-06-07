using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Persistence : MonoBehaviour
{
    void Start()
    {
        SceneManager.LoadScene("Title");
    }
}
