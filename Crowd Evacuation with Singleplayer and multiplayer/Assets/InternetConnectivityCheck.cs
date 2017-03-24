using UnityEngine;
using System.Collections;
using System.Net;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class InternetConnectivityCheck : MonoBehaviour {

    public GameObject panel;
    public static bool check;
    public static bool adminFlag;
    string text = "hello";

    void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
        check = false;
    }
	// Use this for initialization
	void Start () {
        check = false;
	}

    // Update is called once per frame
    void Update()
    {
        if (check)
        {
            StartCoroutine(ConnectionAction());
            
        }

    }


    IEnumerator ConnectionAction()
    {
        //bool value;

        WWW www = new WWW("http://spanky.rutgers.edu/crowdevacgame/");
        yield return www;
        if (www.error != null)
        {
            panel.SetActive(true);

            if (SceneManager.GetActiveScene().name.Contains("Level"))
            {
                Camera.main.GetComponent<MouseLook>().enabled = false;
                Camera.main.GetComponent<mainCameraControls>().enabled = false;
            }
        }
        else
        {
            panel.SetActive(false);
            check = false;
            if (SceneManager.GetActiveScene().name.Contains("Level"))
            {
                Camera.main.GetComponent<MouseLook>().enabled = true;
                Camera.main.GetComponent<mainCameraControls>().enabled = true;
            }
        }
        
    }

}
