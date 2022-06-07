using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectiles : MonoBehaviour
{
    public float speed = 10f;
    float lifeTime = 2f;

    [SerializeField] Rigidbody2D rb;
    [SerializeField] Collider2D myCollider2D;
    [SerializeField] GameObject projectile;

    private void Start()
    {
        rb = this.GetComponentInParent<Rigidbody2D>();
        myCollider2D = this.GetComponentInParent<Collider2D>();
    }

    // Update is called once per frame
    void Update()
    {     
        if(lifeTime > 0)
        {
            lifeTime -= Time.deltaTime;
            rb.velocity = new Vector2(-speed, 0);
        }
        else
        {
            Object.Destroy(projectile);
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.collider.tag == "Player")
        {
            GameState.Instance.PlayerHealth -= 1;
            UIMgr.inst.updateHealth(GameState.Instance.PlayerHealth);
            Object.Destroy(projectile);
        }
        else if (collision.collider.tag != "Untagged" || collision.collider.name.ToString() == "Tilemap" || collision.collider.tag.ToString() == "Blocks")
            Object.Destroy(projectile);
    }

    public void setSpeed(float newSpeed)
    {
        speed = newSpeed;
    }
}
