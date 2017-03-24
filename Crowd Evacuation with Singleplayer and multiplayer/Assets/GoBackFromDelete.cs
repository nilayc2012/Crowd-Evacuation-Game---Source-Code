using UnityEngine;
using System.Collections;

public class GoBackFromDelete : MonoBehaviour {

    public GameObject previousPanel;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void GobackFrom()
    {
        previousPanel.SetActive(true);
        this.gameObject.SetActive(false);
    }
}
