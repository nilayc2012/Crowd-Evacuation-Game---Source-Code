﻿using UnityEngine;
using System.Collections;
using System.IO;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Events;
using System.Linq;
using System.Xml;
using System;

public class datapassing : MonoBehaviour {

    public static string loa,los,homo,type;

    void Awake()
    {
        DontDestroyOnLoad(this);
    }
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void passData()
    {


        int l = GameObject.Find("los").transform.GetChild(1).GetComponent<Dropdown>().value;
        datapassing.los = GameObject.Find("los").transform.GetChild(1).GetComponent<Dropdown>().options[l].text;
		Debug.Log("hey" +datapassing.los);

        l = GameObject.Find("loa").transform.GetChild(1).GetComponent<Dropdown>().value;
        datapassing.loa = GameObject.Find("loa").transform.GetChild(1).GetComponent<Dropdown>().options[l].text;
Debug.Log(datapassing.loa);
        l = GameObject.Find("homo").transform.GetChild(1).GetComponent<Dropdown>().value;
        datapassing.homo = GameObject.Find("homo").transform.GetChild(1).GetComponent<Dropdown>().options[l].text;
Debug.Log(datapassing.homo);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);

    }

    public void storeType()
    {
        int l = GameObject.Find("GTchoices").transform.GetChild(1).GetComponent<Dropdown>().value;
        datapassing.type = GameObject.Find("GTchoices").transform.GetChild(1).GetComponent<Dropdown>().options[l].text;

        GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

        foreach (GameObject g in objects)
        {
            if (g.tag == "leaderboard")
            {

                g.SetActive(true);


            }
        }

        GameObject.Find("gametype").SetActive(false);
    }
}