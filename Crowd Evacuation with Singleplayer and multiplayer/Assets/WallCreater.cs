using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class WallCreater : MonoBehaviour {

    public GameObject panelDev;
    public GameObject backpanel;
    public GameObject panelObj;
    public GameObject Canvas;

    public GameObject wall;

    public GameObject placeButton;

    public GameObject message;

    public Button editButton;
    public Button deleteButton;

    public float minWidth=2.0f;

    public Vector3 startLocation;
    public Vector3 startRotation;
    public Vector3 startScale;

    public GameObject plane;

    void Awake()
    {
        startLocation = new Vector3 (plane.transform.position.x,1.22f,plane.transform.position.z);
        startRotation = new Vector3(0, 0, 0);
        startScale=new Vector3(2.0f,3.0f,0.1f);
    }
    // Use this for initialization
    void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

        if (Camera.main.GetComponent<bringUpMenu>().nOfWalls >= Camera.main.GetComponent<bringUpMenu>().totalnofWalls)
        {
            int count = 0;
            foreach (GameObject wall in GameObject.FindGameObjectsWithTag("wall"))
            {
                if (wall.GetComponent<dooronwall>() != null)
                    count++;
            }

            if (count == Camera.main.GetComponent<bringUpMenu>().nOfWalls)
            {
                editButton.interactable = false;
                deleteButton.interactable = false;
            }
            else
            {
                editButton.interactable = true;
                deleteButton.interactable = true;
            }

            placeButton.GetComponent<Button>().interactable = false;
            message.GetComponent<Text>().text = "No More Walls to Place";
        }
        else if(Camera.main.GetComponent<bringUpMenu>().nOfWalls==0)
        {
            editButton.interactable = false;
            placeButton.GetComponent<Button>().interactable = true;
            deleteButton.interactable = false;
        }
        else 
        {
            int count = 0;
           foreach(GameObject wall in GameObject.FindGameObjectsWithTag("wall"))
            {
                if (wall.GetComponent<dooronwall>() != null)
                    count++;
            }

            if (count == Camera.main.GetComponent<bringUpMenu>().nOfWalls)
            {
                editButton.interactable = false;
                deleteButton.interactable = false;
            }
            else
            {
                editButton.interactable = true;
                deleteButton.interactable = true;
            }
            placeButton.GetComponent<Button>().interactable = true;
            message.GetComponent<Text>().text = "";
            
        }

    }

    public void createWall()
    {
        GameObject obj = Instantiate(wall);
        obj.tag = "wall";
        obj.transform.position = startLocation;
        obj.transform.eulerAngles = startRotation;
        obj.transform.localScale = startScale;
        obj.AddComponent<NewWallScript>();
        GameObject panel = Instantiate(panelObj);
        panel.transform.position = panelObj.transform.position;
        panel.transform.parent = Canvas.transform;

        obj.GetComponent<WallDetector>().panel = panel;
        panel.GetComponent<ChangeWallDetails>().wall = obj;
        panel.SetActive(true);
        Camera.main.GetComponent<bringUpMenu>().nOfWalls++;
        this.gameObject.SetActive(false);
    }

    public void editWall()
    {
        GameObject[] walls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall in walls)
        {
            if (wall.GetComponent<NewWallScript>() != null && wall.GetComponent<dooronwall>()==null)
            {
                wall.GetComponent<NewWallScript>().enabled = true;
                wall.GetComponent<NewWallScript>().edit = true;
                wall.GetComponent<NewWallScript>().delete = false;
            }
        }
        this.gameObject.SetActive(false);
    }

    public void deleteWall()
    {
        GameObject[] walls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall in walls)
        {
            if (wall.GetComponent<NewWallScript>() != null&& wall.GetComponent<dooronwall>()==null)
            {
                wall.GetComponent<NewWallScript>().enabled = true;
                wall.GetComponent<NewWallScript>().edit = false;
                wall.GetComponent<NewWallScript>().delete = true;
            }
        }
        backpanel.SetActive(true);
        this.gameObject.SetActive(false);
    }

    public void goback()
    {
        panelDev.SetActive(true);

        GameObject[] walls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall in walls)
        {
            if (wall.GetComponent<NewWallScript>() != null)
            {
                wall.GetComponent<NewWallScript>().edit = false;
                wall.GetComponent<NewWallScript>().delete = false;
            }
        }

        Camera.main.GetComponent<bringUpMenu>().nonMainFlag = false;
        Camera.main.GetComponent<bringUpMenu>().menuEnabled = true;
        this.gameObject.SetActive(false);
    }
}
