using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class WallDetector : MonoBehaviour {

    public List<GameObject> collidedWalls;
    bool flag;
	// Use this for initialization
	void Start () {
        flag = false;
        collidedWalls = new List<GameObject>();
	}
	
	// Update is called once per frame
	void Update () {

        if(!flag)
        {
            flag = true;

            foreach (GameObject wall in collidedWalls)
                Debug.Log(this.gameObject.name + " collided walls " + wall.gameObject.name);
        }
	
	}

    void onTriggerEnter(Collider other)
    {
        collidedWalls.Add(other.gameObject);
    }
}
