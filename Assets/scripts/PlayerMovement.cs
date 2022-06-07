using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public Animator animator;
    public Sprite[] spriteArray;
    public SpriteRenderer sprite;

    public const string HORIZONTAL = "Horizontal";
    public const string JUMP = "Jump";

    public float moveSpeed = 0f;
    public float jumpPower = 8f;
    public float soundDelay;
    private float horizontal = 0;

    public float coyoteTime = 0.15f;
    public float coyoteTimeCounter;
    public float jumpBufferTime = 0.15f;
    public float jumpBufferCounter;
    private bool facingRight = true;
    private bool soundPlaying = false;

    [SerializeField] private GameObject player;
    [SerializeField] private Rigidbody2D rb2d;
    [SerializeField] private LayerMask groundLayer;
    [SerializeField] private LayerMask tetrisLayer;
    [SerializeField] private CircleCollider2D boxCollider2D;
    private AudioSource audioSource;

    private void Awake()
    {
        animator = player.GetComponent<Animator>();
        audioSource = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
    
        // Allow jumps off of ground using a timer.
        if (Grounded() || Tetris())
            coyoteTimeCounter = coyoteTime;
        else
            coyoteTimeCounter -= Time.deltaTime;

        // Allow for jump buffering.
        if (Input.GetButton(JUMP))
            jumpBufferCounter = jumpBufferTime;
        else
            jumpBufferCounter -= Time.deltaTime;

        // Get left and right movement.
        if (Input.GetButton(HORIZONTAL))
        {
            horizontal = Input.GetAxis(HORIZONTAL) * moveSpeed;
            rb2d.velocity = new Vector2(horizontal, rb2d.velocity.y);
            if (!soundPlaying && Grounded())
            {
                StartCoroutine(walkSound());
            }
            else
            {
                StopCoroutine(walkSound());
            }
        }
       
        // Jumping movement.
        if (coyoteTimeCounter > 0f && jumpBufferCounter > 0f)
        {
            rb2d.velocity = new Vector2(rb2d.velocity.x, jumpPower);
            jumpBufferCounter = 0f;
        }

        if (Input.GetButtonUp(JUMP) && rb2d.velocity.y > 0f)
        {
            rb2d.velocity = new Vector2(rb2d.velocity.x, rb2d.velocity.y * .5f);
            coyoteTimeCounter = 0f;
        }

        animator.SetFloat("speed", Mathf.Abs(rb2d.velocity.x));

        if(player.GetComponent<Rigidbody2D>().velocity.y > 1)
        {
            sprite.sprite = spriteArray[2];
            animator.enabled = false;
        }
        else if(player.GetComponent<Rigidbody2D>().velocity.y < -1)
        {
            sprite.sprite = spriteArray[1];
            animator.enabled = false;
        }
        else if(player.GetComponent<Rigidbody2D>().velocity.y ==0 )
        {
            sprite.sprite = spriteArray[0];
            animator.enabled = true;
        }

        if (rb2d.velocity.x > 0 && !facingRight)
            Flip();
        if (rb2d.velocity.x < 0 && facingRight)
            Flip();
    }

    private bool Grounded()
    {
        RaycastHit2D raycastHit = Physics2D.BoxCast(boxCollider2D.bounds.center, boxCollider2D.bounds.size, 0f, Vector2.down, 0.1f, groundLayer);
        return raycastHit.collider != null;
    }

    private bool Tetris()
    {
        RaycastHit2D raycastHit = Physics2D.BoxCast(boxCollider2D.bounds.center, boxCollider2D.bounds.size, 0f, Vector2.down, 0.01f, tetrisLayer);
        return raycastHit.collider != null;
    }

    private void Flip()
    {
        // Change facing bool.
        facingRight = !facingRight;

        Vector3 scaler = player.transform.localScale;
        scaler.x *= -1;
        player.transform.localScale = scaler;
    }

    private IEnumerator walkSound()
    {
        soundPlaying = true;
        audioSource.Play();
        yield return new WaitForSeconds(soundDelay);
        soundPlaying = false;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.collider.name.ToString() == "KillZ")
        {
            GameState.Instance.PlayerHealth = 0;
            UIMgr.inst.updateHealth(GameState.Instance.PlayerHealth);
        }
    }
}
