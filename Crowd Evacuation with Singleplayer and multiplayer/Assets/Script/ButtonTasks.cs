using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;
using System.Globalization;
using System.Text.RegularExpressions;
using System;


public class ButtonTasks : MonoBehaviour {

    AudioSource audio2;

    public GameObject panel;

    void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
    }
	// Use this for initialization
	void Start () {
        audio2 = GetComponent<AudioSource>();
	}
	
	// Update is called once per frame
	void FixedUpdate () {
	
	}

    public void buttonStart()
    {
        SceneManager.LoadScene("EnterName");
    }
    public void buttonSettings()
    {
		SceneManager.LoadScene("Settings");
    }
	    public void buttonGamePlay()
    {
		SceneManager.LoadScene("GamePlay");
    }
    public void Rules()
    {
		SceneManager.LoadScene("Rules");
    }
    public void credits()
    {
		SceneManager.LoadScene("Credits");
    }
    public void quit()
    {
  
        if (InternetConnectivityCheck.adminFlag)
        {
            Application.OpenURL("http://spanky.rutgers.edu/crowdevacgame/Real/survey.html");
        }
        else
        {
            Application.OpenURL("http://spanky.rutgers.edu/crowdevacgame/experimental/survey.html");
        }
        
        Application.Quit();
    }
    public void leaderboardEnter()
    {
        SceneManager.LoadScene("LeaderBoardDropDown");
    }
    public void architect()
    {
		DestroyObject(GameObject.Find("Game"));
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex+1);
    }
    public void firefighter()
    {

    }
    public void backscript()
    {
        DestroyObject(GameObject.Find("Game"));
        DestroyObject(GameObject.Find("Value"));
        SceneManager.LoadScene("Start");
    }
	public void SinglePlayer()
	{
        DestroyObject(GameObject.Find("Game"));
		SceneManager.LoadScene("Level1SinglePlayer");
		FileScript.checkedHM=false;
		FileScript.replayFlag=false;

	}

    public void MultiPlayer()
    {
        DestroyObject(GameObject.Find("Game"));
        SceneManager.LoadScene("Level1");
        FileScript.checkedHM = false;
        FileScript.replayFlag = false;

    }

    public void LoginInRegister()
    {
        GameObject.Find("registererrorText").GetComponent<Text>().text = "";
        GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

        foreach (GameObject g in objects)
        {
            if (g.name == "Login")
            {
                g.SetActive(true);
                break;
            }
        }

        GameObject.Find("Register").SetActive(false);
    }

    public void RegisterInLogin()
    {
        GameObject.Find("loginerrortext").GetComponent<Text>().text = "";
        GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

        foreach (GameObject g in objects)
        {
            if (g.name == "Register")
            {
                g.SetActive(true);
                break;

            }
        }

        GameObject.Find("Login").SetActive(false);
    }

    public void Login()
    {
        GameObject.Find("loginerrortext").GetComponent<Text>().text = "";
        string emailid = GameObject.Find("username").GetComponent<InputField>().text;
        string pwd = GameObject.Find("password").GetComponent<InputField>().text;
        GameObject.Find("loginerrortext").GetComponent<Text>().text = "";

        //Debug.Log(emailid + " " + pwd);

        GameObject errortext=null;

        GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];
        foreach (GameObject g in objects)
        {
            if (g.name == "loginerrortext")
            {

                errortext = g;

            }
        }

        if (emailid == "" || pwd == "" )
        {

            errortext.GetComponent<Text>().text = "No Field should be empty";
            errortext.SetActive(true);
        }
        else
        {
            string url;
#if UNITY_EDITOR
            url = "http://spanky.rutgers.edu/crowdevacgame/login.php"; //-- local
#else
            url = "http://spanky.rutgers.edu/crowdevacgame/login.php"; //--live
#endif
            WWWForm loginForm = new WWWForm();

            loginForm.AddField("uname", emailid, System.Text.Encoding.UTF8);
            loginForm.AddField("pwd", pwd, System.Text.Encoding.UTF8);


            WWW www = new WWW(url, loginForm);
            IEnumerator coroutine = WaitForRequestLogin(www,errortext,emailid);
            StartCoroutine(coroutine);
        }


    }

    public void Register()
    {
        GameObject.Find("registererrorText").GetComponent<Text>().text = "";
        string fname = GameObject.Find("fname").GetComponent<InputField>().text;
        string lname = GameObject.Find("lname").GetComponent<InputField>().text;
        string emailid = GameObject.Find("emailid").GetComponent<InputField>().text;
        string pwd = GameObject.Find("password").GetComponent<InputField>().text;
        string cpwd = GameObject.Find("cpassword").GetComponent<InputField>().text;
        string age = GameObject.Find("age").GetComponent<InputField>().text;

        //Debug.Log(fname + " " + lname + " " + emailid + " " + pwd + " " + cpwd + " " + age);
        
        GameObject errortext=null;

        GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

        foreach (GameObject g in objects)
        {
            if (g.name == "registererrorText")
            {
                errortext = g;

            }
        }

        int n;

        if (fname=="" ||lname==""||emailid==""||pwd==""||cpwd==""||age=="")
        {
            errortext.GetComponent<Text>().text = "No Field should be empty";
            errortext.SetActive(true);
        }

        else if(!Regex.IsMatch(emailid,@"(.+)(@)(.+)(.)(.+)$"))
        {
            errortext.GetComponent<Text>().text = "Invalid Email ID";
            errortext.SetActive(true);

        }

        else if(pwd!=cpwd)
        {
            errortext.GetComponent<Text>().text = "Password Mismatch";
            errortext.SetActive(true);
        }
        else if(!int.TryParse(age,out n))
        {
            errortext.GetComponent<Text>().text = "Age Should be only A Number";
            errortext.SetActive(true);
        }

        else
        {
            string url;
#if UNITY_EDITOR
            url = "http://spanky.rutgers.edu/crowdevacgame/register.php"; //-- local
#else
            url = "http://spanky.rutgers.edu/crowdevacgame/register.php"; //--live
#endif
            WWWForm loginForm = new WWWForm();

            loginForm.AddField("uname", emailid, System.Text.Encoding.UTF8);
            loginForm.AddField("pwd", pwd, System.Text.Encoding.UTF8);
            loginForm.AddField("fname", fname, System.Text.Encoding.UTF8);
            loginForm.AddField("lname", lname, System.Text.Encoding.UTF8);
            loginForm.AddField("age", age, System.Text.Encoding.UTF8);

            WWW www = new WWW(url, loginForm);
            IEnumerator coroutine = WaitForRequestRegister(www,errortext);
            StartCoroutine(coroutine);

        }

    }

    IEnumerator WaitForRequestRegister(WWW www, GameObject errortext)
    {
        yield return www;

        //Debug.Log("hello" + www.text);
       // System.IO.File.WriteAllText(@"C:\Users\test\Desktop\Crowd Evacuation with Singleplayer and multiplayer\Build\WriteText.txt", www.text + "hello");

        if (www.text.Equals("registered"))
        {
            errortext.GetComponent<Text>().text = "Registered";
            errortext.SetActive(true);
        }
        else if (www.text.Equals("exists"))
        {
            errortext.GetComponent<Text>().text = "Username Exists";
            errortext.SetActive(true);
        }
        else
        {
            errortext.GetComponent<Text>().text = "Connection failure";
            errortext.SetActive(true);
        }

    }

    IEnumerator WaitForRequestLogin(WWW www, GameObject errortext,string user)
    {

        panel.SetActive(true);
        yield return www;
        //Debug.Log("hello" + www.text);
        /*System.IO.StreamWriter file = new System.IO.StreamWriter("C:\test.txt");
        file.WriteLine(www.text + "hello");*/
        panel.SetActive(false);

        if (www.text.Equals("pass"))
        {
            if(user.Equals("admin"))
            {
                InternetConnectivityCheck.adminFlag = true;
            }
            else
            {
                InternetConnectivityCheck.adminFlag = false;
            }
            errortext.GetComponent<Text>().text = "Pass";
            errortext.SetActive(true);
            Destroy(GameObject.Find("Game"));
            SceneManager.LoadScene("Start");
        }
        else if (www.text.Equals("wrong pwd"))
        {
            errortext.GetComponent<Text>().text = "Wrong Password";
            errortext.SetActive(true);
        }
        else if (www.text.Equals("wrong username"))
        {
            errortext.GetComponent<Text>().text = "Wrong Username";
            errortext.SetActive(true);
        }
        else
        {
            errortext.GetComponent<Text>().text = "Connection failure";
            errortext.SetActive(true);
        }

    }


}
