using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class titleanimateup : MonoBehaviour
    
{
    public GameObject text;
    public GameObject text2;
    public GameObject text3;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (text.transform.position.y < 700)
        {
            text.transform.Translate(new Vector3(0, 100, 0) * Time.deltaTime);

        }
        if (text2.transform.position.y < 650)
        {
            text2.transform.Translate(new Vector3(0, 100, 0) * Time.deltaTime);

        }
        if (text3.transform.position.y < 350)
        {
            text3.transform.Translate(new Vector3(0, 100, 0) * Time.deltaTime);

        }
    }
}
