using System;
using UnityEngine;

public class BlockMovement : MonoBehaviour
{
    public const string FLIP = "flip";
    public const string HORIZONTAL = "blockHorizontal";
    public const string DOWN = "down";
    public float dropMultiplier;

    public bool isDone = false;
    public float moveSpeed = 3f;
    public float flipTime = 0.5f;
    public float fallSpeed = 0.5f;
    private float flipTimeCounter;
    private float horizontal = 0;
    private string buttonPressed = null;
    

    private Vector2 velocity;
    private bool isGrounded;
    [SerializeField] private Rigidbody2D rb2d;
    [SerializeField] private LayerMask groundLayer;
    [SerializeField] private LayerMask tetrisLayer;
    [SerializeField] private PolygonCollider2D polygonCollider2D;

    // Update is called once per frame
    void Update()
    {
        if (!isDone)
        {
            if (flipTimeCounter >= 0)
                flipTimeCounter -= Time.deltaTime;

            // Get Block Movement.
            if (Input.GetButton(HORIZONTAL))
                buttonPressed = HORIZONTAL;
            if (Input.GetButtonUp(DOWN))
            {
                fallSpeed = fallSpeed * dropMultiplier;
            }

            

            if (Input.GetButton(FLIP) && flipTimeCounter <= 0)
            {
                rb2d.SetRotation(rb2d.rotation + 90);
                flipTimeCounter = flipTime;
                buttonPressed = null;
            }
        }
    }

    private void FixedUpdate()
    {
        if (!isGrounded)
        {
            if (buttonPressed == HORIZONTAL)
                horizontal = Input.GetAxis(HORIZONTAL) * moveSpeed;

            // Move block with fallspeed.
            rb2d.velocity = new Vector2(horizontal, -fallSpeed);
        }
        else
        { 
            rb2d.constraints = RigidbodyConstraints2D.FreezePositionX | RigidbodyConstraints2D.FreezePositionY;
            rb2d.bodyType = RigidbodyType2D.Static;
            this.gameObject.layer = 6;
            isDone = true;
            Invoke("swapBlock", 1f);
        }
    }

    private void Grounded()
    {
        RaycastHit2D raycastHit = Physics2D.BoxCast(polygonCollider2D.bounds.center, polygonCollider2D.bounds.size, 0f, Vector2.down, 0.01f, groundLayer);
        isGrounded = raycastHit.collider != null;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.collider.gameObject.layer == 6)
        {
            isGrounded = true;
        }
        else if (collision.collider.gameObject.name == "KillZ")
        {
            BlockDropper.inst.DropBlock();
            Destroy(this.gameObject);
        }
    }

    private void swapBlock()
    {
        Destroy(this);
        BlockDropper.inst.DropBlock();
    }
}
