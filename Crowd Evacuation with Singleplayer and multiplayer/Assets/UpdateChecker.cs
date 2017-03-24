using UnityEngine;
using System.Collections;

public class UpdateChecker : MonoBehaviour {

    public GameObject panel;

#if UNITY_STANDALONE && !UNITY_EDITOR
    IEnumerator Start()
    {


        string url = "http://spanky.rutgers.edu/crowdevacgame/get_update.php?";

        WWW www = new WWW(url);
        yield return www;

        Debug.Log(www.text + " " + VersionChecker.version);
        if (!www.text.Equals(VersionChecker.version))
        {
            panel.SetActive(true);
        }

        
    }

#else
    void Start()
    {

    }

#endif



    // Update is called once per frame
    void Update () {
	
	}

    public void downloadUpdate()
    {
        panel.SetActive(false);
        Application.OpenURL("http://spanky.rutgers.edu/crowdevacgame/GamerArchitect.zip");
    }
}
