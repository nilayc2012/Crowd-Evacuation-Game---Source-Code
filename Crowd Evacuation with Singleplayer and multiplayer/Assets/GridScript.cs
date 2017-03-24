using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class GridCell
{
    public float minX, maxX, minY, maxY;

    public float agentCount;


    public GridCell(float minX, float maxX, float minY, float maxY)
    {
        this.maxX = maxX;
        this.minX = minX;
        this.minY = minY;
        this.maxY = maxY;
        this.agentCount = 0.0f;
    }
}

public class GridScript : MonoBehaviour {

    public GridCell[,] grid;
    public float unitLengthX;
    public float unitLengthY;

    public float minX, maxX, minY, maxY;

    public Dictionary<Vector2,int> worldPoints;

    void Awake()
    {
        grid = new GridCell[100, 100];
        GameObject plane = GameObject.FindGameObjectWithTag("floor");

        worldPoints = new Dictionary<Vector2, int>();


        minX = plane.transform.position.x - plane.transform.localScale.x * 10 / 2;
        maxX = plane.transform.position.x + plane.transform.localScale.x * 10 / 2;
        minY = plane.transform.position.z - plane.transform.localScale.z * 10 / 2;
        maxY = plane.transform.position.z + plane.transform.localScale.z * 10 / 2;

        

        float lengthX = maxX - minX;
        float lengthY = maxY - minY;

        //Debug.Log(minX + " " + minY + " " + maxX + " " + maxY);

        unitLengthX = lengthX / 100;
        unitLengthY = lengthY / 100;
        //Debug.Log(unitLengthX + " " + unitLengthY);

        float tempX = minX;
        float tempY = minY;

        for (int i = 0; i < grid.GetLength(0); i++)
        {
            tempX = minX;
            for (int j = 0; j < grid.GetLength(1); j++)
            {
                grid[i, j] = new GridCell((float)Math.Round(tempX,2), (float)Math.Round(tempX + unitLengthX,2), (float)Math.Round(tempY,2), (float)Math.Round(tempY + unitLengthY,2));
                //Debug.Log((float)Math.Round(tempX,2) + " " + (float)Math.Round(tempX + unitLengthX,2) + " " + (float)Math.Round(tempY,2) + " " + (float)Math.Round(tempY + unitLengthY,2));
                tempX = tempX + unitLengthX;
            }
            tempY = tempY + unitLengthY;
        }



    }

    // Use this for initialization
    void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
