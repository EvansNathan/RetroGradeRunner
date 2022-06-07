using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class animateCart : MonoBehaviour
{
    public bool isDone;
    public bool isCartSpin;
    public float timer;
    public RawImage sprite;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {


        

        if (isCartSpin == true)
        {
            timer += Time.deltaTime;

            transform.Rotate(new Vector3(0, 180, 0) * Time.deltaTime);

            if (timer > 1.5) sprite.color = (Color.white);

            if (timer > 2)
            {
                transform.localRotation = Quaternion.identity;
                timer = 0;
                isCartSpin = false;
                isDone = true;
            }
        }
    }

}
