using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Cart : MonoBehaviour
{
    public bool isCollected;
    public bool isDone;
    public bool isCartSpin;
    public float timer;
    public Material collectedMat;
    public RawImage sprite;
    
    // Start is called before the first frame update
    void Start()
    {
    
    }

    // Update is called once per frame
    void Update()
    {
        

        if (isCollected == true && isDone == false)
        {
            isCartSpin = true;
        }


        if (isCartSpin == true)
        {
            timer += Time.deltaTime;

            transform.Rotate(new Vector3(0, 90, 0) * Time.deltaTime);

            if (timer > 2) sprite.color = (Color.white);

            if (timer > 3.85)
            {
                transform.localRotation = Quaternion.identity;
                timer = 0;
                isCartSpin = false;
                isDone = true;
            } 
        }
    }

}
