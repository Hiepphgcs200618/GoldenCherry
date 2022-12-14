using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RollCredit : MonoBehaviour
{
    public GameObject credit;

    void Start()
    {
        StartCoroutine(Credit());
    }

    IEnumerator Credit()
    {
        yield return new WaitForSeconds(0.5f);
        credit.SetActive(true);
        yield return new WaitForSeconds(10);
        SceneManager.LoadScene(1);
    }
}
