﻿using UnityEngine;
using System.Collections;

public class EndStatus : MonoBehaviour {

    public bool end;
	// Use this for initialization
	void Start () {
        end = false;
	}
	
	// Update is called once per frame
	void Update () {

        foreach(GameObject agent in GameObject.FindGameObjectsWithTag("agent"))
        {
            
            if(Vector3.Distance(agent.transform.position,GameObject.FindGameObjectWithTag("destinations").transform.position)<=1.0f)
            {
                agent.SetActive(false);
            }
        }

        if(GameObject.FindGameObjectsWithTag("agent").Length==0)
        {
            end = true;
        }
    }
}
