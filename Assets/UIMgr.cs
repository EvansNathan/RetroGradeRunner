using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UIMgr : MonoBehaviour
{
    public GameObject timeObj;
    public float gameTime;
    public UnityEngine.UI.Text timeDisplay;

    public GameObject creditObj;
    public float creditCount = 0;
    [SerializeField] private TextMeshProUGUI creditDisplay;

    public List<GameObject> UICartElement;
    public List<GameObject> UIBlockElement;
    [SerializeField] private List<MeshRenderer> LifeList;
    public static UIMgr inst;

    public Vector3 test;
    public List<Vector3> incList;

   public List<GameObject> healthPips;


    // Start is called before the first frame update
    void Start()
    {
        inst = this;
        timeDisplay = timeObj.GetComponent<UnityEngine.UI.Text>();
        creditDisplay.text = creditCount.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        updateTime();
        testButton();
        updateCredits();
    }

    void testButton()
    {
        if (Input.GetKeyUp(KeyCode.T))
        {

        }
    }


    void updateTime()
    {
        gameTime += Time.deltaTime;
        string timeOut = gameTime.ToString("0000");
        timeDisplay.text = timeOut;
    }

    void updateCredits()
    {
        creditDisplay.text = creditCount.ToString();
    }

    public void updateCart(int arraySpot)
    {
     UICartElement[arraySpot].GetComponent<Cart>().isCollected = true;
            
        
    }

    public void updateHealth(int life)
    {
        if (life != 0)
            LifeList[life].enabled = false;
        else
            Restart();
    }

    public void Restart()
    {
        Time.timeScale = 1f;
        UnityEngine.SceneManagement.SceneManager.LoadScene(UnityEngine.SceneManagement.SceneManager.GetActiveScene().name);
    }
}



