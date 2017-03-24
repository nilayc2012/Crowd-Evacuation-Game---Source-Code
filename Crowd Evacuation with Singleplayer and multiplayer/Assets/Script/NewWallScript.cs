using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class NewWallScript : MonoBehaviour {

    public bool edit, delete;
    RaycastHit hitInfo;
    Transform temp;
    private Vector3 screenPoint;
    private Vector3 offset;
    private bool selected;
    Vector3 curpos;
    bool leftflag = false;
    bool rightflag = false;
    float timer = 0;
    public List<GameObject> neighbors = new List<GameObject>();
    public int nOfWalls = 0;
    float moveDistance;

    // Use this for initialization
    void Start () {
        edit = false;
        delete = false;
        hitInfo = new RaycastHit();
        selected = false;
     
        leftflag = false;
        rightflag = false;
        timer = 0;
        moveDistance = .03f;
    }

    // Update is called once per frame
    void FixedUpdate()
    {


        if (Input.GetMouseButtonDown(0) && edit)
        {

            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray.origin, ray.direction, out hitInfo))
            {

                temp = hitInfo.transform;

                if(temp.gameObject==this.gameObject)
                {
                    this.gameObject.GetComponent<WallDetector>().panel.SetActive(true);
                }


            }

        }

        else if (Input.GetMouseButtonDown(1) && delete)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray.origin, ray.direction, out hitInfo))
            {
                temp = hitInfo.transform;

                if (temp.transform.gameObject == this.gameObject)
                {
                    this.gameObject.SetActive(false);
                    foreach (GameObject g in neighbors)
                    {
                        Destroy(g);
                    }
                    Destroy(gameObject);

                    Camera.main.GetComponent<bringUpMenu>().nOfWalls--;
                }
            }
        }

    }


        }
