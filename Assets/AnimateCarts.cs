using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class AnimateCarts : MonoBehaviour
{
    // Start is called before the first frame update
    public List<GameObject> TitleCarts;
    public GameObject particles;

    


    public bool isdone = false;
    int i = 0;
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

        if (i < 5 && isdone == false)
        {
            animate();
            
        }



    }


    void animate()
    {
        TitleCarts[i].GetComponent<animateCart>().isCartSpin = true;
       // if (TitleCarts[i].GetComponent<animateCart>().isDone)
        //{
            if (i < 6)
            {
           
            i++;
                if (i == 5 && isdone == false)
                {
                    Instantiate(particles);
                    isdone = true;
                }
            }


       // }

    }
}
    
