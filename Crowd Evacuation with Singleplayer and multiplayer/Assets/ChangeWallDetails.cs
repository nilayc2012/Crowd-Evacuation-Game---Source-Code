using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ChangeWallDetails : MonoBehaviour {

    public GameObject previousPanel;

    public GameObject plane;

    public GameObject wall;

    public GameObject xpos;
    public GameObject zpos;
    public GameObject scale;



    public bool changing;
	// Use this for initialization
	void Start () {
        changing = false;
        xpos.GetComponent<InputField>().text = wall.transform.position.x.ToString();
        zpos.GetComponent<InputField>().text = wall.transform.position.z.ToString();
        scale.GetComponent<InputField>().text = wall.transform.localScale.x.ToString();
        
	}
	
	// Update is called once per frame
	void Update () {

        if (!changing)
        {
            xpos.GetComponent<InputField>().text = wall.transform.position.x.ToString();
            zpos.GetComponent<InputField>().text = wall.transform.position.z.ToString();
            scale.GetComponent<InputField>().text = wall.transform.localScale.x.ToString();
        }


    }

    public void increaseXpos()
    {
        wall.transform.position = new Vector3( wall.transform.position.x + 0.01f,wall.transform.position.y,wall.transform.position.z);
    }
    public void decreaseXpos()
    {
        wall.transform.position = new Vector3(wall.transform.position.x - 0.01f, wall.transform.position.y, wall.transform.position.z);
    }
    public void increaseZpos()
    {
        wall.transform.position = new Vector3(wall.transform.position.x, wall.transform.position.y, wall.transform.position.z+0.01f);
    }
    public void decreaseZpos()
    {
        wall.transform.position = new Vector3(wall.transform.position.x, wall.transform.position.y, wall.transform.position.z-0.01f);
    }
    public void increaseScale()
    {
        wall.transform.localScale = new Vector3(wall.transform.localScale.x+0.01f, wall.transform.localScale.y, wall.transform.localScale.z);
    }
    public void decreaseScale()
    {
        if(wall.transform.localScale.x - 0.1f>=2f)
        wall.transform.localScale = new Vector3(wall.transform.localScale.x-0.01f, wall.transform.localScale.y, wall.transform.localScale.z);
        else
            wall.transform.localScale = new Vector3(2f, wall.transform.localScale.y, wall.transform.localScale.z);
    }

    public void rotateAngle()
    {
        if(wall.transform.rotation.y==0)
        {
            wall.transform.eulerAngles = new Vector3(wall.transform.rotation.x, 90, wall.transform.rotation.z);
        }
        else
        {
            wall.transform.eulerAngles = new Vector3(wall.transform.rotation.x, 0, wall.transform.rotation.z);
        }
    }

    public void onChangeWallValueX(string value)
    {
        changing = true;
        float n;
        bool check= float.TryParse(value,out n);
        if(!check)
        {
            n = 0.0f;
        }
        float newleft = n - wall.transform.localScale.x / 2;
        float newright = n + wall.transform.localScale.x / 2;

        float planeleft = plane.transform.position.x - plane.transform.localScale.x*10 / 2;
        float planeright = plane.transform.position.x + plane.transform.localScale.x*10 / 2;
        //if (newleft>=planeleft && newright<=planeright)
            wall.transform.position = new Vector3(n, wall.transform.position.y, wall.transform.position.z);
        

    }
    public void onChangeWallValueY(string value)
    {
        changing = true;
        float n;
        bool check = float.TryParse(value, out n);
        if (!check)
        {
            n = 0.0f;
        }
        float newleft = n - wall.transform.localScale.x / 2;
        float newright = n + wall.transform.localScale.x / 2;

        float planeleft = plane.transform.position.z - plane.transform.localScale.z*10 / 2;
        float planeright = plane.transform.position.z + plane.transform.localScale.z*10 / 2;

        //if (newleft >= planeleft && newright <= planeright)
            wall.transform.position = new Vector3(wall.transform.position.x, wall.transform.position.y, n);
        //changing = false;

    }
    public void onChangeWallValueScale(string value)
    {
        changing = true;
        float n;
        bool check = float.TryParse(value, out n);
        if (!check)
        {
            n = 0.0f;
        }

        if (n >= 2f)
            {
                wall.transform.localScale = new Vector3(n, wall.transform.localScale.y, 0.1f);
            //changing = false;
        }
            else
            {
                wall.transform.localScale = new Vector3(2, wall.transform.localScale.y, 0.1f);
                scale.GetComponent<InputField>().text = "2.0";
            //changing = false;
        }

    }

    public void changeFlag()
    {
        changing = false;
    }

    public void SaveWall()
    {
        GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

        foreach (GameObject g in objects)
        {
            if (g.name == "Panelwall")
            {

                g.SetActive(true);
            }
        }
        GameObject[] walls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall in walls)
        {
            if (wall.GetComponent<NewWallScript>() != null)
            {
                wall.GetComponent<NewWallScript>().enabled = false;
            }
        }
        this.gameObject.SetActive(false);
    }
}
