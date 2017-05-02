using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.AI;

/*! \An example tracking script that logs the world position of the object it is attached to.
 *
 *  Set the logs per second and where to output the saved positions.  These can be read by the Heatmap class and turned into a Heatmap.
 */

//CHANGED 2.0
public class Tracker : MonoBehaviour
{
    //times each second that 
    public float logsPerSecond = 5f; //logs per second
    private float logSplit = .2f;
    private float timer = 0f;
    public GameObject mainCam;
    public Camera cam;



    //this tracks wether this is first movement
    int firstMovement;
    float timeIncrement = 0;
    List<PosSpeed> positionsSpeeds;
    List<float> speedAtPos;
    Vector3 originalPosition;

    public void Start()
    {
        //logSplit = 1f / logsPerSecond;
        logSplit = 2;

        timeIncrement = 0;
        firstMovement = 0;
        originalPosition = gameObject.transform.position;

        //set beginning color:

        positionsSpeeds = new List<PosSpeed>();
        speedAtPos = new List<float>();
        //GameController.agentSpeedMap[this.gameObject.name] = speedAtPos;

        GameController.agentPositionSpeedMap[this.gameObject.name] = positionsSpeeds;

    }

    public void FixedUpdate()
    {
        timeIncrement = timeIncrement + Time.fixedDeltaTime;
    }

    public void LateUpdate()
    {
            GameController.agentPositionSpeedMap[this.gameObject.name].Add(new PosSpeed(this.transform.position, Convert.ToSingle(Math.Round(this.GetComponent<NavMeshAgent>().velocity.magnitude,2)),timeIncrement));

    }


}
