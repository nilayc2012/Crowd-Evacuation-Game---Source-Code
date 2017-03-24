using UnityEngine;
using System.Collections;

public class VersionChecker : MonoBehaviour {

    public static string version = "2.0";
    void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
    }
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
