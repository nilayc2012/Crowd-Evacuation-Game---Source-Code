using UnityEngine;
using System.Collections;
using System.IO;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Events;
using System.Linq;
using System.Xml;
using System;



public class bringUpMenu : MonoBehaviour
{

    public bool nonMainFlag;
    public GameObject WallPanel;

    public float squareFactor;
    //for SHowData
    public Camera mainCamera;
    public Canvas menuWithEndMid;
    public GameObject serviceMenu;
    //objects to disappear
    public GameObject endGame;
    public GameObject midGame;
    public GameObject light;
    public GameObject canvasDev;
    public static bool crowdflag;
    public static bool noList;
    //object to make appear
    public GameObject heatMapPlane;
    public GameObject heatPlane;
    //object to appear
    //public GameObject image;
    private IEnumerator coroutine;

    public GameObject losDD, loaDD, lohDD;

    //public static bool running=false;
    public static int running = 0;
    //running=0: not running yet. beginning of level
    //running=1: simulating
    //running=2: restarting
    //running=3: everyone escaped. no quitting
    public Canvas menu;
    public bool menuEnabled = false;
    public GameObject mainCam;
    public int nOfDoors = 0;
    public int totalnofDoors = 5;
    public int nOfPillars = 0;
    public int totalnofPillars = 5;
    public int nOfWalls = 0;
    public int totalnofWalls = 5;
    public float doorWidth;
    public float pillarWidth;
    public int noOfAgents;

    //public Text showWidthPillarS;
    //public Slider pillarWidthS;
    public GameObject agentObj;

    //make active when restart
    public GameObject restartLevel;
    public GameObject infoButton;
    public GameObject heatMapButton;
    public GameObject actualHeatMapButton;
    public GameObject nextLevelButton;
    public GameObject bestHeatMapButton;
    public GameObject actualBestHeatMapButton;

    public static bool operating = false;
    //text that show max number of doors and pillars
    public Text textDoors;
    public Text textPillars;
    public Text textWall;
    GameObject[] walls;
    GameObject[] outerWall;

    public static float mytimer = 0.0f;
    public static bool setTimer = false;
    public static bool pause;

    private MidModalPanel midmodalPanel;
    private UnityAction restart;
    private UnityAction quit;

    public static System.Random r;

    //Text for DisplayInfo
    public Text amountOfPeopleEscaped;
    public Text amountOfPeopleLeft;
    public Text totalEscapeTime;
    public Text averageEscapeTime;
    int timer = 0;
    bool timeFlag = false;
    public static float timeConst = 0.0f;
    public static float changeTimeConst = 0.0f;
    public static float planearea;
    public static bool simflag;

    //list of walls
    //public static List<WallTransform> wallsBeforeDoor;

    //All intersction points
    //public Dictionary<Vector3, List<Transform>> adjacencyListOfIntersections;

    public Material regular;
    public Material heatMapWallMaterial;
    public Material heatMapPillarMaterial;
    public Material heatMapOuterMaterial;
    public Material heatMapMaterial;

    void Awake()
    {
        restoreColor();
        nonMainFlag = false;
        simflag = false;
        midmodalPanel = MidModalPanel.Instance();
        restart = new UnityAction(replayFuction);
        quit = new UnityAction(quitFunction);
        r = new System.Random();
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;
        timer = 0;
        Time.timeScale = 1.0f;
        noList = false;

        //wallsBeforeDoor = new List<WallTransform>();



        //Debug.Log("initial : " + wallsBeforeDoor.Count);

        
        //adjacencyListOfIntersections = new Dictionary<Vector3, List<Transform>>();
    }

    public void endGameReplay()
    {

        //if not running then cant bring up this menu
        if (running == 0)
        {
            actuallyRestart();

        }
        running = 2;
        //deactivate all agents
        GameObject[] agents = GameObject.FindGameObjectsWithTag("agent");

        foreach (GameObject a in agents)
        {
            Destroy(a);
        }


        //stop camera movemen
        /*mainCam.GetComponent<changeCameraMode>().changeToOrthographic();
        mainCam.GetComponent<changeCameraMode>().doesMouseMoveOnBorder = false;
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.Locked;*/
        mainCam.GetComponent<changeCameraMode>().doesMouseMoveOnBorder = false;

        //deactivate other menus
        menuWithEndMid.enabled = true;
        endGame.SetActive(false);
        midGame.SetActive(false);
        canvasDev.SetActive(false);


        //stop camera movement
        mainCam.GetComponent<MouseLook>().enabled = false;
        mainCam.GetComponent<mainCameraControls>().enabled = false;
        mainCam.GetComponent<heatMapControls>().enabled = true;
        mainCamera.orthographic = true;

        //place cam right
        if (SceneManager.GetActiveScene().name == "Level1" || SceneManager.GetActiveScene().name == "Level1SinglePlayer")
        {
            mainCamera.orthographicSize = 8;
            mainCam.transform.position = new Vector3(0f, 14f, 0f);
            mainCam.transform.localEulerAngles = new Vector3(90f, 270f, 0f);
        }
        else if (SceneManager.GetActiveScene().name == "Level2" || SceneManager.GetActiveScene().name == "Level2SinglePlayer")
        {
            mainCam.transform.position = new Vector3(-6.7f, 50f, 0f);
            mainCam.transform.localEulerAngles = new Vector3(90f, 270f, 0f);
            mainCamera.orthographicSize = 30;
        }
        else if (SceneManager.GetActiveScene().name == "Level3" || SceneManager.GetActiveScene().name == "Level3SinglePlayer")
        {
            mainCam.transform.position = new Vector3(-6.7f, 100f, 0f);
            mainCam.transform.localEulerAngles = new Vector3(90f, 270f, 0f);
            mainCamera.orthographicSize = 80;
        }
        else if (SceneManager.GetActiveScene().name == "Level4" || SceneManager.GetActiveScene().name == "Level4SinglePlayer")
        {
            mainCam.transform.position = new Vector3(-6.7f, 200f, 0f);
            mainCam.transform.localEulerAngles = new Vector3(90f, 270f, 0f);
            mainCamera.orthographicSize = 80;
        }
        else if (SceneManager.GetActiveScene().name == "Level5" || SceneManager.GetActiveScene().name == "Level5SinglePlayer")
        {
            mainCam.transform.position = new Vector3(-6.7f, 400f, 0f);
            mainCam.transform.localEulerAngles = new Vector3(90f, 270f, 0f);
            mainCamera.orthographicSize = 80;
        }

        //display heatmap button:
        heatMapButton.SetActive(true);

        actualHeatMapButton.SetActive(true);

        if(bestHeatMapButton!=null)
        bestHeatMapButton.SetActive(true);

        if (actualBestHeatMapButton != null)
            actualBestHeatMapButton.SetActive(true);
        //display restart button
        restartLevel.SetActive(true);
        //display information button
        infoButton.SetActive(true);
        nextLevelButton.SetActive(true);

    }

    public void replayFuction()
    {

            actuallyRestart();

    }

    public void displayRealHeatMap()
    {
        //put heatmap stuff in here
        showAllUsersItems();
        destroyAllBestHeatmapItems();
        colorChangeHM();
        ShowRealHeatMap();
        FileScript.checkedHM = true;
        //createPNG();
    }

    public void displayHeatMap()
    {
        //put heatmap stuff in here
        showAllUsersItems();
        destroyAllBestHeatmapItems();
        colorChange();
        ShowHeatMap();
        FileScript.checkedHM = true;
        //createPNG();
    }

    public void displayRealBestHeatMap()
    {
        FileScript.checkedBHM = true;
        hideAllUsersItems();
        destroyAllBestHeatmapItems();
        StartCoroutine(getHeatMapData("heatmap"));
    }

    public void displayBestHeatMap()
    {
        FileScript.checkedBHM = true;
        hideAllUsersItems();
        destroyAllBestHeatmapItems();
        StartCoroutine(getHeatMapData("pathtrace"));
    }

    public void hideAllUsersItems()
    {
        // hide all existing walls, doors, and pillars
        GameObject[] allWalls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall1 in allWalls)
        {
            //if (wall1.GetComponent<NewWallScript> () != null) {
            MeshRenderer render = wall1.gameObject.GetComponent<MeshRenderer>();
            render.enabled = false;
            //}
        }
        GameObject[] allDoors = GameObject.FindGameObjectsWithTag("door");
        foreach (GameObject door1 in allDoors)
        {
            MeshRenderer render = door1.gameObject.GetComponentInChildren<MeshRenderer>();
            if (render != null)
            {
                render.enabled = false;
            }
        }
        GameObject[] allPillars = GameObject.FindGameObjectsWithTag("pillar");
        foreach (GameObject pillar1 in allPillars)
        {
            MeshRenderer render = pillar1.gameObject.GetComponent<MeshRenderer>();
            render.enabled = false;
        }
    }

    public void colorChange()
    {
        GameObject[] allWalls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall1 in allWalls)
        {
            //if (wall1.GetComponent<NewWallScript> () != null) {
            MeshRenderer render = wall1.gameObject.GetComponent<MeshRenderer>();
            render.material = regular;
            render.enabled = true;
            //}
        }

        GameObject[] allouters = GameObject.FindGameObjectsWithTag("outerWall");
        foreach (GameObject outer1 in allouters)
        {
            //if (wall1.GetComponent<NewWallScript> () != null) {
            MeshRenderer render = outer1.gameObject.GetComponent<MeshRenderer>();
            render.material = regular;
            render.enabled = true;
            //}
        }

        GameObject[] allPillars = GameObject.FindGameObjectsWithTag("pillar");
        foreach (GameObject pillar1 in allPillars)
        {
            MeshRenderer render = pillar1.gameObject.GetComponent<MeshRenderer>();
            render.material = regular;
            render.enabled = true;
        }
    }

    public void colorChangeBest()
    {
        GameObject[] allWalls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall1 in allWalls)
        {
            if(wall1.name== "besthmWall")
            { 
            //if (wall1.GetComponent<NewWallScript> () != null) {
            MeshRenderer render = wall1.gameObject.GetComponent<MeshRenderer>();
            render.material = regular;
            render.enabled = true;

            }
        }

        GameObject[] allouters = GameObject.FindGameObjectsWithTag("outerWall");
        foreach (GameObject outer1 in allouters)
        {
            //if (wall1.GetComponent<NewWallScript> () != null) {
            MeshRenderer render = outer1.gameObject.GetComponent<MeshRenderer>();
            render.material = regular;
            render.enabled = true;
            //}
        }

        GameObject[] allPillars = GameObject.FindGameObjectsWithTag("pillar");
        foreach (GameObject pillar1 in allPillars)
        {
            if (pillar1.name == "besthmPillar")
            {
                MeshRenderer render = pillar1.gameObject.GetComponent<MeshRenderer>();
                render.material = regular;
                render.enabled = true;
            }
        }
    }

    public void colorChangeRealHM()
    {
        GameObject[] allWalls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall1 in allWalls)
        {
            if (wall1.name == "besthmWall")
            {
                //if (wall1.GetComponent<NewWallScript> () != null) {
                MeshRenderer render = wall1.gameObject.GetComponent<MeshRenderer>();
                render.material = heatMapMaterial;
                render.enabled = true;
            }
            //}
        }
        GameObject[] allouters = GameObject.FindGameObjectsWithTag("outerWall");
        foreach (GameObject outer1 in allouters)
        {

            //if (wall1.GetComponent<NewWallScript> () != null) {
            MeshRenderer render = outer1.gameObject.GetComponent<MeshRenderer>();
            render.material = heatMapMaterial;
            render.enabled = true;
            //}
        }

        GameObject[] allPillars = GameObject.FindGameObjectsWithTag("pillar");
        foreach (GameObject pillar1 in allPillars)
        {
            if (pillar1.name == "besthmPillar")
            {
                MeshRenderer render = pillar1.gameObject.GetComponent<MeshRenderer>();
                render.material = heatMapMaterial;
                render.enabled = true;
            }
        }
    }

    public void colorChangeHM()
    {
        GameObject[] allWalls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall1 in allWalls)
        {
            //if (wall1.GetComponent<NewWallScript> () != null) {
            MeshRenderer render = wall1.gameObject.GetComponent<MeshRenderer>();
            render.material = heatMapMaterial;
            render.enabled = true;
            //}
        }
        GameObject[] allouters = GameObject.FindGameObjectsWithTag("outerWall");
        foreach (GameObject outer1 in allouters)
        {
            //if (wall1.GetComponent<NewWallScript> () != null) {
            MeshRenderer render = outer1.gameObject.GetComponent<MeshRenderer>();
            render.material = heatMapMaterial;
            render.enabled = true;
            //}
        }

        GameObject[] allPillars = GameObject.FindGameObjectsWithTag("pillar");
        foreach (GameObject pillar1 in allPillars)
        {
            MeshRenderer render = pillar1.gameObject.GetComponent<MeshRenderer>();
            render.material = heatMapMaterial;
            render.enabled = true;
        }
    }

    public void restoreColor()
    {
        GameObject[] allWalls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall1 in allWalls)
        {
            //if (wall1.GetComponent<NewWallScript> () != null) {
            MeshRenderer render = wall1.gameObject.GetComponent<MeshRenderer>();
            render.material = heatMapWallMaterial;
            render.enabled = true;
            //}
        }


        GameObject[] allouters = GameObject.FindGameObjectsWithTag("outerWall");
        foreach (GameObject outer1 in allouters)
        {
            //if (wall1.GetComponent<NewWallScript> () != null) {
            MeshRenderer render = outer1.gameObject.GetComponent<MeshRenderer>();
            render.material = heatMapOuterMaterial;
            render.enabled = true;
            //}
        }

        GameObject[] allPillars = GameObject.FindGameObjectsWithTag("pillar");
        foreach (GameObject pillar1 in allPillars)
        {
            MeshRenderer render = pillar1.gameObject.GetComponent<MeshRenderer>();
            render.material = heatMapPillarMaterial;
            render.enabled = true;
        }

        allWalls = GameObject.FindGameObjectsWithTag("prevwall");
        foreach (GameObject wall1 in allWalls)
        {
            //if (wall1.GetComponent<NewWallScript> () != null) {
            MeshRenderer render = wall1.gameObject.GetComponentInChildren<MeshRenderer>();
            render.material = heatMapWallMaterial;
            render.enabled = true;
            //}
        }
    }

    public void showAllUsersItems()
    {
        // show all existing walls, doors, and pillars
        GameObject[] allWalls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall1 in allWalls)
        {
            //if (wall1.GetComponent<NewWallScript> () != null) {
            MeshRenderer render = wall1.gameObject.GetComponent<MeshRenderer>();
            render.enabled = true;
            //}
        }
        GameObject[] allDoors = GameObject.FindGameObjectsWithTag("door");
        foreach (GameObject door1 in allDoors)
        {
            MeshRenderer render = door1.gameObject.GetComponentInChildren<MeshRenderer>();
            if (render != null)
            {
                render.enabled = true;
            }
        }
        GameObject[] allPillars = GameObject.FindGameObjectsWithTag("pillar");
        foreach (GameObject pillar1 in allPillars)
        {
            MeshRenderer render = pillar1.gameObject.GetComponent<MeshRenderer>();
            render.enabled = true;
        }
    }

    public void destroyAllBestHeatmapItems()
    {
        GameObject[] allWalls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall1 in allWalls)
        {
            if (wall1.name == "besthmWall")
            {
                Destroy(wall1);
            }
        }
        GameObject[] allDoors = GameObject.FindGameObjectsWithTag("door");
        foreach (GameObject door1 in allDoors)
        {
            if (door1.name == "besthmDoor")
            {
                Destroy(door1);
            }
        }
        GameObject[] allPillars = GameObject.FindGameObjectsWithTag("pillar");
        foreach (GameObject pillar1 in allPillars)
        {
            if (pillar1.name == "besthmPillar")
            {
                Destroy(pillar1);
            }
        }
    }

    IEnumerator getHeatMapData(string type)
    {
        int l = Camera.main.gameObject.GetComponent<bringUpMenu>().losDD.GetComponent<Dropdown>().value;
        string los = Camera.main.gameObject.GetComponent<bringUpMenu>().losDD.GetComponent<Dropdown>().options[l].text;

        l = Camera.main.gameObject.GetComponent<bringUpMenu>().loaDD.GetComponent<Dropdown>().value;
        string loa = Camera.main.gameObject.GetComponent<bringUpMenu>().loaDD.GetComponent<Dropdown>().options[l].text;

        l = Camera.main.gameObject.GetComponent<bringUpMenu>().lohDD.GetComponent<Dropdown>().value;
        string homo = Camera.main.gameObject.GetComponent<bringUpMenu>().lohDD.GetComponent<Dropdown>().options[l].text;

        string tlos = "", tloa = "", thomo = "";

        float mintime = System.Single.PositiveInfinity;
        string runId = "";

#if UNITY_EDITOR
        string url = "http://spanky.rutgers.edu/crowdevacgame/Real/getheatmapdata.php"; //--local 
#else
            string url ;
            if(InternetConnectivityCheck.adminFlag)
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/experimental/getheatmapdata.php";
            }
            else
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/Real/getheatmapdata.php";
            }
    
#endif
        WWWForm loginform = new WWWForm();

        if (SceneManager.GetActiveScene().name.Contains("SinglePlayer"))
        {
            loginform.AddField("type", "sp", System.Text.Encoding.UTF8);
        }
        else
        {
            loginform.AddField("type", "mp", System.Text.Encoding.UTF8);
        }
        loginform.AddField("scene", SceneManager.GetActiveScene().name);
        loginform.AddField("loa", loa);
        loginform.AddField("los", los);
        loginform.AddField("homo", homo);

        WWW www = new WWW(url,loginform);
        yield return www;
        string xml = www.text;
        //Debug.Log(xml);
        XmlDocument doc = new XmlDocument();

        doc.LoadXml(xml);
        XmlNode userdata = doc.FirstChild;
        foreach (XmlNode node in userdata.ChildNodes)
        {
            //Debug.Log(node.Name);
            if (node.Name == "Run-ID")
            {
                runId = node.InnerText;
             }

            if (node.Name == "Walls")
            {
                // for each wall
                foreach (XmlNode cnode in node.ChildNodes)
                {
                    GameObject Wallobj = GameObject.CreatePrimitive(PrimitiveType.Cube);
                    Wallobj.name = "besthmWall";
                    Wallobj.tag = "wall";
                    //Wallobj.GetComponent<Renderer>().material.color = new Color(177F / 255F, 229F / 255F, 229F / 255F, 30F / 255F);
                    //Wallobj.GetComponent<Renderer>().material = regular;
                    // for each wall info (Position, Rotation, Scale)
                    foreach (XmlNode transformInfo in cnode.ChildNodes)
                    {
                        float X = 0;
                        float Y = 0;
                        float Z = 0;

                        if (transformInfo.Name == "Position")
                        {
                            foreach (XmlNode transformInfoVariable in transformInfo.ChildNodes)
                            {
                                if (transformInfoVariable.Name == "X")
                                {
                                    X = float.Parse(transformInfoVariable.InnerText);
                                }
                                if (transformInfoVariable.Name == "Y")
                                {
                                    Y = float.Parse(transformInfoVariable.InnerText);
                                }
                                if (transformInfoVariable.Name == "Z")
                                {
                                    Z = float.Parse(transformInfoVariable.InnerText);
                                }
                            }
                            Wallobj.transform.position = new Vector3(X, Y, Z);
                        }
                        if (transformInfo.Name == "Rotation")
                        {
                            foreach (XmlNode transformInfoVariable in transformInfo.ChildNodes)
                            {
                                if (transformInfoVariable.Name == "X")
                                {
                                    X = float.Parse(transformInfoVariable.InnerText);
                                }
                                if (transformInfoVariable.Name == "Y")
                                {
                                    Y = float.Parse(transformInfoVariable.InnerText);

                                    if (Y > .001)
                                    {
                                        Y = 90;
                                    }
                                }
                                if (transformInfoVariable.Name == "Z")
                                {
                                    Z = float.Parse(transformInfoVariable.InnerText);
                                }
                            }

                            Wallobj.transform.eulerAngles = new Vector3(X, Y, Z);
                            //Wallobj.transform.rotation = Quaternion.Euler(X, Y, Z);
                        }
                        if (transformInfo.Name == "Scale")
                        {
                            foreach (XmlNode transformInfoVariable in transformInfo.ChildNodes)
                            {
                                if (transformInfoVariable.Name == "X")
                                {
                                    X = float.Parse(transformInfoVariable.InnerText);
                                }
                                if (transformInfoVariable.Name == "Y")
                                {
                                    Y = float.Parse(transformInfoVariable.InnerText);
                                }
                                if (transformInfoVariable.Name == "Z")
                                {
                                    Z = float.Parse(transformInfoVariable.InnerText);
                                }
                            }
                            Wallobj.transform.localScale = new Vector3(X, Y, Z);
                        }
                    }

                    Wallobj.SetActive(true);
                }
            }
            
            if (node.Name == "Pillars")
            {
                // for each pillar
                foreach (XmlNode cnode in node.ChildNodes)
                {
                    GameObject Pillarobj = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
                    Pillarobj.name = "besthmPillar";
                    Pillarobj.tag = "pillar";
                    //Pillarobj.GetComponent<Renderer>().material.color = new Color(0F, 0F, 0F);
                    //Pillarobj.GetComponent<Renderer>().material= regular;
                    // for each door info (Position, Rotation, Scale)
                    foreach (XmlNode transformInfo in cnode.ChildNodes)
                    {
                        float X = 0;
                        float Y = 0;
                        float Z = 0;

                        if (transformInfo.Name == "Position")
                        {
                            foreach (XmlNode transformInfoVariable in transformInfo.ChildNodes)
                            {
                                if (transformInfoVariable.Name == "X")
                                {
                                    X = float.Parse(transformInfoVariable.InnerText);
                                }
                                if (transformInfoVariable.Name == "Y")
                                {
                                    Y = float.Parse(transformInfoVariable.InnerText);
                                }
                                if (transformInfoVariable.Name == "Z")
                                {
                                    Z = float.Parse(transformInfoVariable.InnerText);
                                }
                            }
                            Pillarobj.transform.position = new Vector3(X, Y, Z);
                        }
                        if (transformInfo.Name == "Rotation")
                        {
                            foreach (XmlNode transformInfoVariable in transformInfo.ChildNodes)
                            {
                                if (transformInfoVariable.Name == "X")
                                {
                                    X = float.Parse(transformInfoVariable.InnerText);
                                }
                                if (transformInfoVariable.Name == "Y")
                                {
                                    Y = float.Parse(transformInfoVariable.InnerText);

                                    if (Y > .001)
                                    {
                                        Y = 90;
                                    }
                                }
                                if (transformInfoVariable.Name == "Z")
                                {
                                    Z = float.Parse(transformInfoVariable.InnerText);
                                }
                            }
                            Pillarobj.transform.rotation = Quaternion.Euler(X, Y, Z);
                        }
                        if (transformInfo.Name == "Scale")
                        {
                            foreach (XmlNode transformInfoVariable in transformInfo.ChildNodes)
                            {
                                if (transformInfoVariable.Name == "X")
                                {
                                    X = float.Parse(transformInfoVariable.InnerText);
                                }
                                if (transformInfoVariable.Name == "Y")
                                {
                                    Y = float.Parse(transformInfoVariable.InnerText);
                                }
                                if (transformInfoVariable.Name == "Z")
                                {
                                    Z = float.Parse(transformInfoVariable.InnerText);
                                }
                            }
                            Pillarobj.transform.localScale = new Vector3(X, Y, Z);
                        }
                    }
                    Pillarobj.SetActive(true);
                }
            }
        }

        if (type.Equals("pathtrace"))
        {
#if UNITY_EDITOR
            url = "http://spanky.rutgers.edu/crowdevacgame/Real/get_image.php?runid=" + runId + "&scene=" + SceneManager.GetActiveScene().name;   //---local
#else

            if(InternetConnectivityCheck.adminFlag)
            {
                        url = "http://spanky.rutgers.edu/crowdevacgame/experimental/get_image.php?runid=" + runId + "&scene=" + SceneManager.GetActiveScene().name;
            }
            else
            {
                        url = "http://spanky.rutgers.edu/crowdevacgame/Real/get_image.php?runid=" + runId + "&scene=" + SceneManager.GetActiveScene().name;
            }

#endif

        }
        else
        {
#if UNITY_EDITOR
            url = "http://spanky.rutgers.edu/crowdevacgame/Real/get_heatmap_image.php?runid=" + runId + "&scene=" + SceneManager.GetActiveScene().name;   //---local
#else

            if(InternetConnectivityCheck.adminFlag)
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/experimental/get_heatmap_image.php?runid=" + runId + "&scene=" + SceneManager.GetActiveScene().name; 
            }
            else
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/Real/get_heatmap_image.php?runid=" + runId + "&scene=" + SceneManager.GetActiveScene().name; 
            }

#endif
        }
        if (SceneManager.GetActiveScene().name.Contains("SinglePlayer"))
        {
            url = url + "&type=sp";
        }
        else
        {
            url = url + "&type=mp";
        }

        www = new WWW(url);
        yield return www;

        if (type.Equals("pathtrace"))
        {
            colorChangeBest();
        }
        else
        {
            colorChangeRealHM();
        }
            //byte[] bytes = new byte[image.Length * sizeof(char)];
            //System.Buffer.BlockCopy(image.ToCharArray(), 0, bytes, 0, bytes.Length);
            byte[] bytes = www.bytes;

        mainCam.transform.localEulerAngles = new Vector3(90f, 270f, 0f);
        //hide info stuff
        amountOfPeopleEscaped.gameObject.SetActive(false);
        amountOfPeopleLeft.gameObject.SetActive(false);
        totalEscapeTime.gameObject.SetActive(false);
        averageEscapeTime.gameObject.SetActive(false);



        //bring up canvas

        //image.SetActive(true);
        heatMapPlane.SetActive(true);
        //turn light
        light.SetActive(false);
        heatPlane.SetActive(true);
        //make the heatmap
        //SpeedAndPosition[] speedPoints = mainCam.GetComponent<collectResults>().speedAndPos.ToArray();
        //Texture2D tex = Heatmap.CreateHeatmap(points, mainCam, 5);
        Texture2D tex = new Texture2D(2, 2);
        tex.LoadImage(bytes);
        Heatmap.CreateRenderPlane(tex);
        //points.Clear();

    }

    public void displayInfo()
    {
        //put heatmap stuff in here
        ShowInfo();
    }



    public void actuallyRestart()
    {
        
        showAllUsersItems();
        destroyAllBestHeatmapItems();

        FileScript.time = mytimer;
        if (running == 1 && GameController.finish)
        {

            //GameObject.Find("FileController").GetComponent<FileScript>().flag=true;
            //GameObject.Find("FileController").GetComponent<FileScript>().createXML();
            if (!GameObject.Find("FileController").GetComponent<FileScript>().flag)//XMLXML
                GameObject.Find("FileController").GetComponent<FileScript>().createXML();//XMLXML
        }

        GameObject[] walls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall in walls)
        {
            if (wall.GetComponent<NewWallScript>() != null)
            {

                wall.GetComponent<NewWallScript>().nOfWalls = nOfWalls;
            }

            wall.tag = "prevwall";
            DontDestroyOnLoad(wall);
            if (wall.GetComponent<WallDetector>()!=null && wall.GetComponent<WallDetector>().panel != null)
            {
                DontDestroyOnLoad(wall.GetComponent<WallDetector>().panel.transform.parent);
                DontDestroyOnLoad(wall.GetComponent<WallDetector>().panel);
            }
        }
        GameObject[] doors = GameObject.FindGameObjectsWithTag("door"); 
        foreach (GameObject door in doors)
        {
            //door.GetComponent<doorOpeningScript>().enabled = false;
            if (door.transform.rotation.y <= 50)
                door.transform.eulerAngles = new Vector3(door.transform.rotation.x, 0.0f, door.transform.rotation.z);
            else
                door.transform.eulerAngles = new Vector3(door.transform.rotation.x, 90.0f, door.transform.rotation.z);
            DontDestroyOnLoad(door);
        }
        GameObject[] pillars = GameObject.FindGameObjectsWithTag("pillar");
        foreach (GameObject pillar in pillars)
        {
            DontDestroyOnLoad(pillar);
        }

        FileScript.replayFlag = true;

        SceneManager.LoadScene(SceneManager.GetActiveScene().name);

        //restartWithSaved();
    }



    public void restartWithSaved()
    {
        showAllUsersItems();
        destroyAllBestHeatmapItems();

        running = 0;

        //deactivate other menus
        menuWithEndMid.enabled = true;
        endGame.SetActive(false);
        midGame.SetActive(false);
        heatMapButton.SetActive(false);
        bestHeatMapButton.SetActive(false);
        actualBestHeatMapButton.SetActive(false);
        infoButton.SetActive(false);
        restartLevel.SetActive(false);
        nextLevelButton.SetActive(false);
        amountOfPeopleEscaped.enabled = false;
        amountOfPeopleLeft.enabled = false;
        totalEscapeTime.enabled = false;
        averageEscapeTime.enabled = false;
        canvasDev.SetActive(true);

        //start camera movement
        mainCam.GetComponent<MouseLook>().enabled = true;
        mainCam.GetComponent<mainCameraControls>().enabled = true;
        mainCam.GetComponent<heatMapControls>().enabled = false;
        mainCamera.orthographic = false;
        mainCamera.transform.position = new Vector3(0, 50, 0);
        mainCamera.transform.rotation = Quaternion.identity;
        mainCamera.transform.rotation = Quaternion.Euler(90f, 0f, 0f);

        //activate necessary
        light.SetActive(true);
        heatPlane.SetActive(false);
        //Destroy(GameObject.fin("agent (Clone)"));


        //restarting level means changing camera angle and position and deleting all temp agents



    }


    void quitFunction()
    {
        destroyAllObjects();
        nameStore.name = "";
        SceneManager.LoadScene("Start");
    }
    public void destroyAllObjects()
    {
        GameObject[] walls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall in walls)
        {
            Destroy(wall);

        }
        GameObject[] doors = GameObject.FindGameObjectsWithTag("door");
        foreach (GameObject door in doors)
        {
            Destroy(door);
        }
        GameObject[] pillars = GameObject.FindGameObjectsWithTag("pillar");
        foreach (GameObject pillar in pillars)
        {
            Destroy(pillar);
        }
    }

    void Start()
    {
        restoreColor();
        simflag = false;
        crowdflag = false;
        timeFlag = false;
        timeConst = 0.0f;
        serviceMenu.SetActive(false);
        changeTimeConst = 0.0f;

        //plane are calculation

        planearea = GameObject.FindGameObjectWithTag("floor").transform.localScale.x * GameObject.FindGameObjectWithTag("floor").transform.localScale.z * squareFactor;
        //Debug.Log("planearea is " + planearea);

        //if there are prevwalls, delete all other walls
        GameObject prevwall = GameObject.FindGameObjectWithTag("prevwall");
        if (prevwall != null)
        {
            GameObject[] wall = GameObject.FindGameObjectsWithTag("wall");
            nOfWalls = 0;
            foreach (GameObject w in wall)
            {
                if (w.GetComponent<NewWallScript>() != null)
                {
                    nOfWalls = w.GetComponent<NewWallScript>().nOfWalls;
                }
                else if (w.name == "RightWall")
                {

                }
                else
                {
                    Destroy(w);
                }
            }
            GameObject[] prevwalls = GameObject.FindGameObjectsWithTag("prevwall");
            foreach (GameObject w in prevwalls)
            {
                if (w.GetComponent<NewWallScript>() != null)
                {
                    nOfWalls = w.GetComponent<NewWallScript>().nOfWalls;
                }
                w.tag = "wall";
            }

        }




        GameObject[] doors = GameObject.FindGameObjectsWithTag("door");
        nOfDoors = 0;
        foreach (GameObject d in doors)
        {
            nOfDoors++;
            //d.GetComponent<doorOpeningScript>().enabled = true;
        }
        if (nOfDoors < 0)
        {

            nOfDoors = 0;
        }

        GameObject[] pillars = GameObject.FindGameObjectsWithTag("pillar");
        nOfPillars = 0;
        foreach (GameObject d in pillars)
        {
            nOfPillars++;
        }
        if (nOfPillars < 0)
        {
            nOfPillars = 0;
        }

        mytimer = 0.0f;
        setTimer = false;
        operating = false;
        pause = false;
        doorWidth = 1;
        running = 0;
        menuEnabled = false;
        outerWall = GameObject.FindGameObjectsWithTag("outerWall");

    }


    // Update is called once per frame
    void FixedUpdate()
    {
        Cursor.lockState = CursorLockMode.None;
        if (setTimer)
        {
            mytimer = mytimer + Time.fixedDeltaTime;

        }

        if (Camera.main.GetComponent<makeDoor>().enabled == false && Camera.main.GetComponent<makePillar>().enabled == false && Camera.main.GetComponent<makeWall>().enabled == false)
        {
            if((Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1))&&(menuEnabled==false && serviceMenu.activeSelf==false&&GameObject.Find("midGame") ==null)&&!simflag)
            {
                GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];
                foreach (GameObject g in objects)
                {
                    if (g.name == "ErrorText")
                    {
                        g.SetActive(true);
                        g.GetComponentInChildren<Text>().text = "Click Space and select an item";//No more walls and pillars left to place";
                        timer = 100;
                    }
                }
            }
        }

        if (!timeFlag)
        {
            timeConst = Time.deltaTime;
            timeFlag = true;
        }
        timer--;

        if (timer == 1)
        {
            if (GameObject.Find("ErrorText") != null)
            {
                GameObject.Find("ErrorText").GetComponentInChildren<Text>().text = " ";
                GameObject.Find("ErrorText").SetActive(false);
            }
        }
        if (setTimer)
        {
            if (Input.GetKey(KeyCode.F))
            {
                Time.timeScale = 20;

            }
            else if (Input.GetKeyUp(KeyCode.F))
            {

                Time.timeScale = 1.0f;
            }

        }

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            pause = !pause;

            if (pause)
            {
                menuEnabled = false;
                menu.enabled = false;
                serviceMenu.SetActive(false);
                noList = true;
                Camera.main.GetComponent<MouseLook>().enabled = false;
                mainCam.GetComponent<mainCameraControls>().enabled = false;
                midmodalPanel.Choice(restart, quit);
                GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

                foreach (GameObject g in objects)
                {
                    if (g.name == "ErrorText")
                    {
                        g.GetComponentInChildren<Text>().text = "";
                        g.SetActive(false);

                    }
                }
                
            }
            else
            {
                GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

                foreach (GameObject g in objects)
                {
                    if (g.name == "ErrorText")
                    {
                        g.SetActive(true);

                    }
                }
                midmodalPanel.ClosePanel();

                if (!crowdflag && !simflag)
                    noList = false;
                else if(simflag)
                {
                    Camera.main.GetComponent<MouseLook>().enabled = true;
                    mainCam.GetComponent<mainCameraControls>().enabled = true;
                }
                else
                    serviceMenu.SetActive(true);

            }
        }

        if (running == 0 && !pause)
        {
            if (Input.GetKeyDown("space") && !noList && !crowdflag && !nonMainFlag)
            {
                menuEnabled = !menuEnabled;
                GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

                foreach (GameObject g in objects)
                {
                    if (g.name == "ErrorText")
                    {
                        g.GetComponentInChildren<Text>().text = "";
                        g.SetActive(false);

                    }
                }
            }
            if (menuEnabled == true)
            {

                //showWidthPillarS.text = "Pillar Width: " + pillarWidthS.value;
                textDoors.text = "Doors Placed: " + nOfDoors + "/" + totalnofDoors;
                textPillars.text = "Pillars Placed: " + nOfPillars + "/" + totalnofPillars;
                textWall.text = "Walls Placed: " + nOfWalls + "/" + totalnofWalls;

                if (!((nOfPillars == totalnofPillars) && (nOfWalls == totalnofWalls)) || ConnectionScript.notConnected)
                {
                    GameObject.Find("submit").GetComponent<Button>().interactable = false;
                    if (!ConnectionScript.notConnected)
                        GameObject.Find("errorText").GetComponent<Text>().text = "Place all walls and pillars to start simulation";

                }
                else
                {
                    if ((nOfPillars == totalnofPillars) && (nOfWalls == totalnofWalls))
                    {
                        GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];
                        foreach (GameObject g in objects)
                        {
                            if (g.name == "ErrorText")
                            {
                                g.SetActive(true);
                                g.GetComponentInChildren<Text>().text = "";//No more walls and pillars left to place";
                                timer = 100;

                            }
                        }
                    }
                    GameObject.Find("submit").GetComponent<Button>().interactable = true;
                    GameObject.Find("errorText").GetComponent<Text>().text = "";

                }
                menu.enabled = true;
                mainCam.GetComponent<MouseLook>().enabled = false;
                mainCam.GetComponent<mainCameraControls>().enabled = false;
                Cursor.lockState = CursorLockMode.None;
                Cursor.visible = true;
                mainCam.GetComponent<makeDoor>().enabled = false;
                mainCam.GetComponent<makePillar>().enabled = false;
                mainCam.GetComponent<makeWall>().enabled = false;
                GameObject[] walls = GameObject.FindGameObjectsWithTag("wall");
                foreach (GameObject wall in walls)
                {
                    if (wall.GetComponent<NewWallScript>() != null)
                    {
                        wall.GetComponent<NewWallScript>().enabled = false;
                    }
                }
            }
            else
            {
                menu.enabled = false;
                if (!crowdflag)
                {
                    mainCam.GetComponent<MouseLook>().enabled = true;
                    mainCam.GetComponent<mainCameraControls>().enabled = true;
                }
                //if orthographic, cursor mode should be none
                /*if (mainCamera.orthographic)
                {
                    Cursor.lockState = CursorLockMode.None;
                    Cursor.visible = true;
                }
                else
                {
                    if (!crowdflag)
                    {
                        Cursor.lockState = CursorLockMode.Locked;
                        Cursor.visible = true;
                        Cursor.lockState = CursorLockMode.Confined;
                    }
                }*/

            }

            pillarWidth = 0.7f;
        }
    }


    public void placeDoor()
    {
        mainCam.GetComponent<makeDoor>().enabled = true;
        mainCam.GetComponent<makePillar>().enabled = false;
        mainCam.GetComponent<makeWall>().enabled = false;
        menu.enabled = false;
        menuEnabled = false;
        mainCam.GetComponent<MouseLook>().enabled = true;
        mainCam.GetComponent<mainCameraControls>().enabled = true;
        operating = true;
        GameObject[] walls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall in walls)
        {
            if (wall.GetComponent<NewWallScript>() != null)
            {
                wall.GetComponent<NewWallScript>().enabled = false;
            }
        }

    }


    public void placePillar()
    {
        operating = true;
        mainCam.GetComponent<makeDoor>().enabled = false;
        mainCam.GetComponent<makePillar>().enabled = true;
        mainCam.GetComponent<makeWall>().enabled = false;
        menu.enabled = false;
        menuEnabled = false;
        mainCam.GetComponent<MouseLook>().enabled = true;
        mainCam.GetComponent<mainCameraControls>().enabled = true;
        GameObject[] walls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall in walls)
        {
            if (wall.GetComponent<NewWallScript>() != null)
            {
                wall.GetComponent<NewWallScript>().enabled = false;
            }
        }
    }

    public void placeWall()
    {
        nonMainFlag = true;
        operating = false;
        mainCam.GetComponent<makeDoor>().enabled = false;
        mainCam.GetComponent<makePillar>().enabled = false;
        mainCam.GetComponent<makeWall>().enabled = true;
        menu.enabled = false;
        menuEnabled = false;
        mainCam.GetComponent<MouseLook>().enabled = true;
        mainCam.GetComponent<mainCameraControls>().enabled = true;
        WallPanel.SetActive(true);
       /* GameObject[] walls = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wall in walls)
        {
            if (wall.GetComponent<NewWallScript>() != null)
            {
                wall.GetComponent<NewWallScript>().enabled = true;
            }
        }*/
    }

    public void configureCrowd()
    {
        //loadIntersections();
        serviceMenu.SetActive(true);
        crowdflag = true;
        menuEnabled = false;
        menu.enabled = false;
        //Debug.Log(mainCam.GetComponent<MouseLook>().enabled);
        mainCam.GetComponent<MouseLook>().enabled = false;
        //Debug.Log(mainCam.GetComponent<MouseLook>().enabled);
        mainCam.GetComponent<mainCameraControls>().enabled = false;
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;
    }


    public void clickedSubmit()
    {
        //loadIntersections();
        crowdflag = false;
        simflag = true;


        int l = Camera.main.gameObject.GetComponent<bringUpMenu>().loaDD.GetComponent<Dropdown>().value;
        string loa = Camera.main.gameObject.GetComponent<bringUpMenu>().loaDD.GetComponent<Dropdown>().options[l].text;

        l = Camera.main.gameObject.GetComponent<bringUpMenu>().lohDD.GetComponent<Dropdown>().value;
        string homo = Camera.main.gameObject.GetComponent<bringUpMenu>().lohDD.GetComponent<Dropdown>().options[l].text;

        l = Camera.main.gameObject.GetComponent<bringUpMenu>().losDD.GetComponent<Dropdown>().value;
        string los = Camera.main.gameObject.GetComponent<bringUpMenu>().losDD.GetComponent<Dropdown>().options[l].text;

        UnityEngine.Random.InitState(GameObject.Find("GameController").GetComponent<GameController>().listOfConfigurations.IndexOf(new CrowdConfiguration(los[0].ToString(), loa, homo))+1);

        float uppercount, lowercount;

        if (los.Contains("A"))
        {
            lowercount = 0.2f;
            uppercount = 0.27f;
        }
        else if (los.Contains("B"))
        {
            lowercount = 0.31f;
            uppercount = 0.42f;
        }
        else if (los.Contains("C"))
        {
            lowercount = 0.43f;
            uppercount = 0.72f;
        }
        else if (los.Contains("D"))
        {
            lowercount = 0.73f;
            uppercount = 1.08f;
        }
        else if (los.Contains("E"))
        {
            lowercount = 1.09f;
            uppercount = 2.17f;
        }
        else
        {
            lowercount = 2.18f;
            uppercount = 2.5f;
        }

        List<List<Transform>> tempListList = new List<List<Transform>>();
        List<Transform> wallList = new List<Transform>();
        List<Transform> doorList = new List<Transform>();
        List<Transform> pillarList = new List<Transform>();
        //For XML or JSON Storage
        GameObject[] wallFinals = GameObject.FindGameObjectsWithTag("wall");
        foreach (GameObject wallFinal in wallFinals)
        {
            wallList.Add(wallFinal.transform);
        }
        tempListList.Add(wallList);

        GameObject[] doorFinals = GameObject.FindGameObjectsWithTag("door");
        foreach (GameObject doorFinal in doorFinals)
        {
            doorList.Add(doorFinal.transform);
        }

        tempListList.Add(doorList);

        GameObject[] pillarFinals = GameObject.FindGameObjectsWithTag("pillar");
        foreach (GameObject pillarFinal in pillarFinals)
        {
            pillarList.Add(pillarFinal.transform);
        }

        tempListList.Add(pillarList);

        FileScript.tempListList = tempListList;

        running = 1;
        mainCam.GetComponent<makeDoor>().enabled = false;
        mainCam.GetComponent<makePillar>().enabled = false;
        mainCam.GetComponent<makeWall>().enabled = false;
        GameObject.Find("GameController").GetComponent<ConnectionScript>().enabled = false;
        menu.enabled = false;
        menuEnabled = false;
        serviceMenu.SetActive(false);
        mainCam.GetComponent<MouseLook>().enabled = true;
        mainCam.GetComponent<mainCameraControls>().enabled = true;
        GameController.startSiren = true;
        setTimer = true;

        if (!Input.GetKeyDown("space"))
        {
            float density = UnityEngine.Random.Range(lowercount, uppercount);
            //Debug.Log("density is "+density);
            foreach(GameObject plane in GameObject.FindGameObjectsWithTag("losplanes"))
            {


                    float xmin = plane.transform.position.x - (plane.transform.localScale.x*10 / 2);

                    float zmin = plane.transform.position.z - (plane.transform.localScale.z*10 / 2);
 
                    float xmax = plane.transform.position.x + (plane.transform.localScale.x*10 / 2);

                    float zmax = plane.transform.position.z + (plane.transform.localScale.z*10 / 2);

                    float area = (plane.transform.localScale.x * plane.transform.localScale.z) * 20;

                   //Debug.Log("area is " + area*density +" "+ Math.Ceiling(area * density));

                    int noOfAgent = Convert.ToInt32(Math.Ceiling(area * density)) + 2;

                    //Debug.Log("number of agenr is " + noOfAgent);

                    int count = 0;

                UnityEngine.Random.State normalstate = UnityEngine.Random.state;

                    while (count != noOfAgent)
                    {
                    UnityEngine.Random.InitState(count + 90);
                        GameObject agent = Instantiate(agentObj);
                        agent.AddComponent<newagentscript>();
                    agent.SetActive(false);

                   // Debug.Log(UnityEngine.Random.Range(0.1f, 1.0f));
                        float xcord = UnityEngine.Random.Range(0.1f, 1.0f) * plane.transform.localScale.x*10;
                        float zcord = UnityEngine.Random.Range(0.1f, 1.0f) * plane.transform.localScale.z*10;

                    //Debug.Log("coord " + (xmin + xcord) + " " + (zmin + zcord));

                        agent.GetComponent<NavigationController>().startPosition = new Vector3(xmin+xcord, 1.22f, zmin+zcord);
                        count++;

                    }

                UnityEngine.Random.state = normalstate;
                





            }


            int agentcount = 0;
            GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

            foreach (GameObject g in objects)
            {
                if (g.tag == "agent")
                {
                    g.name = "agent" + (++agentcount);
                    g.GetComponent<Tracker>().enabled = true;
                    g.SetActive(true);
                    

                }
            }

            noOfAgents = GameObject.FindGameObjectsWithTag("agent").Length;



        }
        GameController.dont = true;

    }

    public void restartGame()
    {
        //destroyAllObjects();
        //SceneManager.LoadScene("Level2");
        actuallyRestart();
    }

    public void ShowRealHeatMap()
    {
        mainCam.transform.localEulerAngles = new Vector3(90f, 270f, 0f);
        //hide info stuff
        amountOfPeopleEscaped.gameObject.SetActive(false);
        amountOfPeopleLeft.gameObject.SetActive(false);
        totalEscapeTime.gameObject.SetActive(false);
        averageEscapeTime.gameObject.SetActive(false);



        //bring up canvas

        //image.SetActive(true);
        heatMapPlane.SetActive(true);
        //turn light
        light.SetActive(false);
        heatPlane.SetActive(true);
        //make the heatmap

        GridScript gs = GameObject.Find("GameController").GetComponent<GridScript>();
        //Debug.Log("fff"+gs.worldPoints.Count);
        GridCell[,] grid = gs.grid;

        //SpeedAndPosition[] speedPoints = mainCam.GetComponent<collectResults>().speedAndPos.ToArray();
        //Texture2D tex = Heatmap.CreateHeatmap(points, mainCam, 5);
        Texture2D tex = HeatmapActual.CreateHeatmap(grid, mainCamera, heatPlane);


        byte[] bytes = tex.EncodeToPNG();
        HeatmapActual.CreateRenderPlane(tex);
        //points.Clear();
    }

    public void ShowHeatMap()
    {
        mainCam.transform.localEulerAngles = new Vector3(90f, 270f, 0f);
        //hide info stuff
        amountOfPeopleEscaped.gameObject.SetActive(false);
        amountOfPeopleLeft.gameObject.SetActive(false);
        totalEscapeTime.gameObject.SetActive(false);
        averageEscapeTime.gameObject.SetActive(false);



        //bring up canvas

        //image.SetActive(true);
        heatMapPlane.SetActive(true);
        //turn light
        light.SetActive(false);
        heatPlane.SetActive(true);
        //make the heatmap
        Dictionary<Vector2, float> points = mainCam.GetComponent<collectResults>().allData;
        //SpeedAndPosition[] speedPoints = mainCam.GetComponent<collectResults>().speedAndPos.ToArray();
        //Texture2D tex = Heatmap.CreateHeatmap(points, mainCam, 5);
        //Debug.Log("sss"+ points.Count);
        Texture2D tex = Heatmap.CreateHeatmap(points, mainCamera, heatPlane);


        byte[] bytes = tex.EncodeToPNG();
        Heatmap.CreateRenderPlane(tex);
        //points.Clear();
    }


    public void ShowInfo()
    {
        mainCam.transform.localEulerAngles = new Vector3(-90f, 270f, 0f);
        //display number of people who escaped
        //display number of people left
        //display average time
        //display total time
        //image.SetActive(false);
        heatMapPlane.SetActive(false);
        light.SetActive(true);
        //find heatmaprending and delete it   Heatmap Render Plane
        GameObject heatmapPlane = GameObject.Find("Heatmap Render Plane");
        if (heatmapPlane != null)
        {
            Destroy(heatmapPlane);
        }

        amountOfPeopleEscaped.gameObject.SetActive(true);
        amountOfPeopleLeft.gameObject.SetActive(true);
        totalEscapeTime.gameObject.SetActive(true);
        averageEscapeTime.gameObject.SetActive(true);
        amountOfPeopleEscaped.text = "The amount of people escaped is " + (GameController.maxNumberPeople - GameController.numberLeft);
        amountOfPeopleLeft.text = "The amount of people left is " + GameController.numberLeft;
        totalEscapeTime.text = "The total escape time is " + GameController.totalTime;
        averageEscapeTime.text = "The average escape time is " + (GameController.totalTime / (GameController.maxNumberPeople - GameController.numberLeft));
    }
}