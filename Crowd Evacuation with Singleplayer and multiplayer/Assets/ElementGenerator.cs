using UnityEngine;
using System.Collections.Generic;
using System.Collections;

public class ElementGenerator : MonoBehaviour {
    //pillar details
    public GameObject pillar;
    public float PillarWidth;
    public float pillarHeight;
    public int noOfPillars;

    //wall details


    //Door details

    // Use this for initialization
    void Start () {

        generateWalls();
        generatePillars();
        generateDoors();
	}
	
    void generateWalls()
    {
        GameObject[] walls = GameObject.FindGameObjectsWithTag("wall");
        GameObject[] outerwalls = GameObject.FindGameObjectsWithTag("outerwall");

        GameObject[] totalWalls = new GameObject[walls.Length + outerwalls.Length];
        walls.CopyTo(totalWalls, 0);
        outerwalls.CopyTo(totalWalls, walls.Length);

        List<GameObject> horizontalWalls = new List<GameObject>();
        List<GameObject> verticalWalls = new List<GameObject>();

        foreach(GameObject wall in totalWalls)
        {

        }
    }

    void generateDoors()
    {

    }

    void generatePillars()
    {

    }
	// Update is called once per frame
	void Update () {
	
	}
}
