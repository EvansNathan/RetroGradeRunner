using UnityEngine;

public class CannonEnemy : MonoBehaviour
{
    public float direction = 1f;
    private bool facingLeft = true;
    private float flipCount = .2f;

    [SerializeField] GameObject player;
    [SerializeField] GameObject projectile;
    [SerializeField] BoxCollider2D cannon;

    private void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }

    private void Fire()
    {
        GameObject proj = GameObject.Instantiate(projectile, new Vector2(cannon.transform.position.x + (direction * cannon.bounds.size.x), cannon.transform.position.y), Quaternion.identity);
        Vector3 scaler = proj.transform.localScale;
        scaler.x *= -direction;
        proj.transform.localScale = scaler;
        Projectiles projSpeed = proj.GetComponent<Projectiles>();
        projSpeed.setSpeed(projSpeed.speed * -direction);
    }

    private void Update()
    {
        if (flipCount > 0)
            flipCount -= Time.deltaTime;
    }

    private void FixedUpdate()
    {
        Vector2 playerPos = player.transform.position;
        if (this.transform.position.x < playerPos.x && facingLeft && flipCount <= 0)
            Flip();
        else if (this.transform.position.x > playerPos.x && !facingLeft && flipCount <= 0)
            Flip();
    }

    private void Flip()
    {
        Vector3 scaler = this.transform.localScale;
        scaler.x *= -1;
        this.transform.localScale = scaler;
        facingLeft = !facingLeft;
        flipCount = 0.2f;
        direction = -direction;
    }
}
