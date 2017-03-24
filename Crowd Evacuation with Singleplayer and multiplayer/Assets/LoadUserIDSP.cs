using UnityEngine;
using System.Collections;

public class LoadUserIDSP : MonoBehaviour {

    // Use this for initialization
    IEnumerator Start()
    {
        if (nameStore.name == "")
        {

#if UNITY_EDITOR
            string url = "http://localhost/get_user_id.php?type=sp";
#else
            string url ;
            if(InternetConnectivityCheck.adminFlag)
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/experimental/get_user_id.php?type=sp";
            }
            else
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/Real/get_user_id.php?type=sp";
            }
#endif


            WWW www = new WWW(url);
            yield return www;


            nameStore.name = "user" + www.text;
            Debug.Log("hello" + www.text);
        }

    }


    // Update is called once per frame
    void Update () {
	
	}
}
