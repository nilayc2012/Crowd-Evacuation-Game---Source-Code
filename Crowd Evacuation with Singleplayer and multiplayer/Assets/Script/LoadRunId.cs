using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class LoadRunId : MonoBehaviour {

	// Use this for initialization
	IEnumerator Start () {


#if UNITY_EDITOR
        string url = "http://spanky.rutgers.edu/crowdevacgame/Real/get_run_id.php?type=mp&scene=" + SceneManager.GetActiveScene().name;
#else
            string url ;
            if(InternetConnectivityCheck.adminFlag)
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/experimental/get_run_id.php?type=mp&scene=" + SceneManager.GetActiveScene().name;
            }
            else
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/Real/get_run_id.php?type=mp&scene=" + SceneManager.GetActiveScene().name;
            }
#endif



        WWW www = new WWW(url);
				yield return www;
				nameStore.runId=www.text;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
