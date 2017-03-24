using UnityEngine;
using System.Collections;

public class ActivateWallModifier : MonoBehaviour {

    public GameObject panel;
    public GameObject panelDev;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void AddorModifyWall()
    {
        panelDev.SetActive(false);
        panel.SetActive(true);
        
    }
    public void Goback()
    {
        panelDev.SetActive(true);
        panel.SetActive(false);
    }
}
