using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ButtonScript : MonoBehaviour
{
    public void PlayAgain()
    {
        SceneManager.LoadScene(2);
    }
    public void NextLevel()
    {
        RedirectToLevel.redirectToLevel++;
        SceneManager.LoadScene(2);
    }

    public void MainMenu()
    {
        RedirectToLevel.redirectToLevel = 1;
        SceneManager.LoadScene(2);
    }

    public void RollCredit()
    {
        SceneManager.LoadScene(3);
    }
}
