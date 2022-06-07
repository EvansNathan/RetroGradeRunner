using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    string buttonPressed;
    public const string RIGHT = "right";
    public const string LEFT = "left";

    public float moveSpeed = 3f;
    public float jumpPower = 8f;

    public float coyoteTime = 0.15f;
    public float coyoteTimeCounter;
    public float jumpBufferTime = 0.15f;
    public float jumpBufferCounter;

    [SerializeField] private Rigidbody2D rb2d;
    [SerializeField] private LayerMask groundLayer;
    [SerializeField] private BoxCollider2D boxCollider2D;

    // Update is called once per frame
    void Update()
    {
        // Allow jumps off of ground using a timer.
        if (Grounded())
            coyoteTimeCounter = coyoteTime;
        else
            coyoteTimeCounter -= Time.deltaTime;

        // Allow for jump buffering.
        if (Input.GetKeyDown(KeyCode.W))
            jumpBufferCounter = jumpBufferTime;
        else
            jumpBufferCounter -= Time.deltaTime;

        // Get left and right movement.
        if (Input.GetKey(KeyCode.D))
            buttonPressed = RIGHT;
        else if (Input.GetKey(KeyCode.A))
            buttonPressed = LEFT;
        else
            buttonPressed = null;

        // Jumping movement.
        if (coyoteTimeCounter > 0f && jumpBufferCounter > 0f)
        {
            rb2d.velocity = new Vector2(rb2d.velocity.x, jumpPower);
            jumpBufferCounter = 0f;
        }

        if (Input.GetKeyUp(KeyCode.W) && rb2d.velocity.y > 0f)
        {
            rb2d.velocity = new Vector2(rb2d.velocity.x, rb2d.velocity.y * 0.5f);
            coyoteTimeCounter = 0f;
        }
    }

    private void FixedUpdate()
    {
        if (buttonPressed  == RIGHT)
            rb2d.velocity = new Vector2(moveSpeed, rb2d.velocity.y);
        if(buttonPressed == LEFT)
            rb2d.velocity = new Vector2(-moveSpeed, rb2d.velocity.y);
    }

    private bool Grounded()
    {
        RaycastHit2D raycastHit = Physics2D.BoxCast(boxCollider2D.bounds.center, boxCollider2D.bounds.size, 0f, Vector2.down, 0.1f, groundLayer);
        return raycastHit.collider != null;
    }
}
