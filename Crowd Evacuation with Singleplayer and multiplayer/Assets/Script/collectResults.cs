using UnityEngine;
using System.Collections;
using System.Collections.Generic;


public class collectResults : MonoBehaviour {
    //probably dont need this no more
    public List<Vector3> allPoints = new List<Vector3>();
    public List<SpeedAndPosition> speedAndPos = new List<SpeedAndPosition>();
    //Dictionary that stores each point and its speed
    public Dictionary<Vector2, float> allData = new Dictionary<Vector2, float>();
    public Camera mainCam;
    public Canvas menu;
    //objects to disappear
    public GameObject endGame;
    public GameObject midGame;
    public GameObject light;
    public GameObject canvasDev;
    //object to make appear
    public GameObject heatMapPlane;
    public GameObject heatPlane;

    //object to appear
    //public GameObject image;

    void FixedUpdate()
    {

    }

}
