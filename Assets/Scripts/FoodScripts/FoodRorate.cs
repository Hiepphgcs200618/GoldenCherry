using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FoodRorate : MonoBehaviour
{
    public float rotateSpeed = 50f;

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(0, rotateSpeed * Time.deltaTime, 0, Space.World);
    }
}
