using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Events;

public class CrowdConfiguration
{
   public string los;
   public string loa;
   public string loh;

    public CrowdConfiguration()
    {

    }

    public CrowdConfiguration(string los,string loa,string loh)
    {
        this.los = los;
        this.loa = loa;
        this.loh = loh;
    }

    public override bool Equals(object obj)
    {
        var item = obj as CrowdConfiguration;

        if (item == null)
        {
            return false;
        }

        return this.los.Equals(item.los)&&this.loa.Equals(item.loa)&&this.loh.Equals(item.loh);

    }

    }

/*public class PosTime
{
    public float time;
    public Vector3 pos;

    public PosTime(float time,Vector3 pos)
    {
        this.time = time;
        this.pos = pos;
    }
}
*/

public class PosSpeed
{
    public float speed;
    public Vector3 pos;
    public float time;

    public PosSpeed(Vector3 pos,float speed ,float time)
    {
        this.speed = speed;
        this.pos = pos;
        this.time = time;
    }
}

public class GameController : MonoBehaviour
{


    public GameObject plane;

    public static Dictionary<string, List<PosSpeed>> agentPositionSpeedMap;

    //public static Dictionary<string, List<PosTime>> agentPositionMapPathTrace;

    //public static Dictionary<string, List<float>> agentSpeedMap;

    public AudioClip siren;
    public static bool startSiren = false;
    AudioSource audio;
    public static bool finish = false;
    public static bool dont = false;
    // Use this for initialization
    private ModalPanel modalPanel;
    private UnityAction next;
    private UnityAction replay;
    private UnityAction quit;
    public static int numberLeft = 0;
    public static int maxNumberPeople = 0;
    public static float totalTime = 0f;
    public GameObject mainCam;
    public GameObject FileController;
    public static bool countFlag = false;
    //public static float maxTime = 0;

    public static int numberOfAgentsReady;
    public static int numberOfAgents;

    public bool sclock;

    public List<CrowdConfiguration> listOfConfigurations;

    public string[] listOfLos = new string[] { "A", "B", "C", "D", "E", "F" };
    public string[] listOfLoa = new string[] { "Low", "Medium", "High" };

    void Awake()
    {
        NavMesh.pathfindingIterationsPerFrame = 50;
        Screen.SetResolution(1920, 1080, true);
        QualitySettings.antiAliasing = 8;
        modalPanel = ModalPanel.Instance();
        next = new UnityAction(nextFunction);
        replay = new UnityAction(replayFuction);
        quit = new UnityAction(quitFunction);
        sclock = false;

        listOfConfigurations = new List<CrowdConfiguration>();
        loadConfiguration();

        agentPositionSpeedMap = new Dictionary<string, List<PosSpeed>>();
        //agentPositionMapPathTrace = new Dictionary<string, List<PosTime>>();
        //agentSpeedMap = new Dictionary<string, List<float>>();
    }

    void Start()
    {

        agentPositionSpeedMap = new Dictionary<string, List<PosSpeed>>();
        //agentPositionMapPathTrace = new Dictionary<string, List<PosTime>>();
        //agentSpeedMap = new Dictionary<string, List<float>>();

        GameObject[] agents = GameObject.FindGameObjectsWithTag("agent");
        numberOfAgentsReady = 0;
        numberOfAgents = agents.Length;


        countFlag = false;
        audio = gameObject.GetComponent<AudioSource>();
        audio.clip = siren;
        startSiren = false;
        dont = false;
        finish = false;
        totalTime = 0;
        maxNumberPeople = 0;
        numberLeft = 0;
    }

   void loadConfiguration()
    {
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    listOfConfigurations.Add(new CrowdConfiguration(listOfLos[i], listOfLoa[j], listOfLoa[k]));

                }
            }
        }


    }

    void replayFuction()
    {
        FileController.GetComponent<FileScript>().flag = false;
        mainCam.GetComponent<bringUpMenu>().endGameReplay();

        //SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
    void quitFunction()
    {
        destroyAllObjects();
        SceneManager.LoadScene("Start");
        Destroy(FileController);
    }
    public void nextFunction()
    {
        FileController.GetComponent<FileScript>().flag = false;
        destroyAllObjects();
        FileScript.checkedHM = false;
        FileScript.replayFlag = false;
        FileScript.checkedBHM = false;
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);

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

    // Update is called once per fraem
    void FixedUpdate()
    {


        if (bringUpMenu.running == 2)
        {
            return;
        }
        GameObject[] agents = GameObject.FindGameObjectsWithTag("agent");
        int count = 0;
        //totalTime = 0;
        foreach (GameObject agent in agents)
        {
            if (agent.activeSelf)
            {
                count++;
            }
        }
        if (count > maxNumberPeople)
        {
            maxNumberPeople = count;
        }
        numberLeft = count;


        if (count == 0 && dont && bringUpMenu.running != 2)
        {
            //Debug.Log("not an error");
            bringUpMenu.setTimer = false;
            GameController.startSiren = false;
            finish = true;
            bringUpMenu.running = 4;

            InternetConnectivityCheck.check = true;

            //change camera
            Camera.main.orthographic = false;
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
            Camera.main.gameObject.GetComponent<heatMapControls>().enabled = false;
            Camera.main.gameObject.GetComponent<mainCameraControls>().enabled = false;
            Camera.main.gameObject.GetComponent<MouseLook>().enabled = false;
            Camera.main.gameObject.GetComponent<bringUpMenu>().enabled = false;

            

            if (!countFlag)
            {

                LoadActualHeatmap();
                LoadPathTrace();

                if (!FileController.GetComponent<FileScript>().flag)//XMLXML
                    FileController.GetComponent<FileScript>().createXML();
                countFlag = true;
            }
            modalPanel.Choice(bringUpMenu.mytimer.ToString(), next, replay, quit);

        }

        if (startSiren)
        {
            if (!audio.isPlaying && !Input.GetKeyDown("space"))
                audio.Play();
        }
        else
        {
            if (audio.isPlaying)
                audio.Stop();
        }
    }


    void LoadActualHeatmap()
    {

        GridScript gs = GameObject.Find("GameController").GetComponent<GridScript>();

        GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

        List<string> agents = new List<string>();

        foreach (GameObject g in objects)
        {
            if (g.tag == "agent")
            {

              /*  for(int i=0;i<agentPositionSpeedMap[g.name].Count-1;i++)
                {
                    if(Vector3.Distance(agentPositionSpeedMap[g.name][i].pos, agentPositionSpeedMap[g.name][i+1].pos)>=0.1f)
                    {
                        //Debug.Log("entered");
                        float timediff = (float)Math.Ceiling((agentPositionSpeedMap[g.name][i + 1].time - agentPositionSpeedMap[g.name][i].time) * 100) / 100;
                        //Debug.Log(timediff + " " + Time.fixedDeltaTime);

                        for (float j=Time.fixedDeltaTime;j<=timediff;j=j+Time.fixedDeltaTime)
                        {
                            Vector3 newPoint = Vector3.Lerp(agentPositionSpeedMap[g.name][i].pos, agentPositionSpeedMap[g.name][i + 1].pos, Time.fixedDeltaTime);
                            float newspeed = (agentPositionSpeedMap[g.name][i].speed + agentPositionSpeedMap[g.name][i + 1].speed) / 2;
                            agentPositionSpeedMap[g.name].Add(new PosSpeed(newPoint, newspeed, Time.fixedDeltaTime));
                        }
                    }

                }*/

                foreach (PosSpeed pos in agentPositionSpeedMap[g.name])
                {

                    int i, j;

                    if (pos.pos.x < gs.minX + gs.unitLengthX)
                    {
                        i = 0;
                    }
                    else
                    {
                        float indexval = (pos.pos.x - gs.minX) / gs.unitLengthX;
                        i = Convert.ToInt32(indexval) - 1;
                    }

                    if (pos.pos.z < gs.minY + gs.unitLengthY)
                    {
                        j = 0;
                    }
                    else
                    {
                        float indexval = (pos.pos.z - gs.minY) / gs.unitLengthY;
                        j = Convert.ToInt32(indexval) - 1;
                    }

                    //Debug.Log(i + " " + j);

                    Vector3 agentpos = pos.pos;

                    if (agentpos.x >= gs.minX && agentpos.x < gs.maxX && agentpos.z >= gs.minY && agentpos.z < gs.maxY)
                    {
                        if (i - 1 >= 0 && j - 1 >= 0)
                            gs.grid[i - 1, j - 1].agentCount = gs.grid[i - 1, j - 1].agentCount + 0.4f;

                        if (i - 1 >= 0 && j + 1 < gs.grid.GetLength(1))
                            gs.grid[i - 1, j + 1].agentCount = gs.grid[i - 1, j + 1].agentCount + 0.40f;

                        if (i + 1 < gs.grid.GetLength(0) && j - 1 >= 0)
                            gs.grid[i + 1, j - 1].agentCount = gs.grid[i + 1, j - 1].agentCount + 0.4f; ;

                        if (i + 1 < gs.grid.GetLength(0) && j + 1 < gs.grid.GetLength(1))
                            gs.grid[i + 1, j + 1].agentCount = gs.grid[i + 1, j + 1].agentCount + 0.4f;

                        if (i - 1 >= 0)
                            gs.grid[i - 1, j].agentCount = gs.grid[i - 1, j].agentCount + 0.7f;
                        if (i + 1 < gs.grid.GetLength(0))
                            gs.grid[i + 1, j].agentCount = gs.grid[i + 1, j].agentCount + 0.7f;

                        gs.grid[i, j].agentCount = gs.grid[i, j].agentCount + 1.0f;

                        if (j - 1 >= 0)
                            gs.grid[i, j - 1].agentCount = gs.grid[i, j - 1].agentCount + 0.7f;
                        if (j + 1 < gs.grid.GetLength(1))
                            gs.grid[i, j + 1].agentCount = gs.grid[i, j + 1].agentCount + 0.7f;
                    }
                }


            }
        }


    }

    void LoadPathTrace()
    {

        float bottomLeftX;
        float bottomLeftZ;
        int maxX;
        int maxY;

        bottomLeftX = (plane.transform.position.x - 10 * plane.transform.localScale.x / 2);
        bottomLeftZ = (plane.transform.position.z - 10 * plane.transform.localScale.z / 2);
        maxX = (int)(plane.transform.localScale.x * 50 * 10);
        maxY = (int)(plane.transform.localScale.z * 50 * 10);

        Dictionary<Vector2, float> allData;
        int radius = 2;
        allData = mainCam.GetComponent<collectResults>().allData;

        

        GameObject[] objects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];
        foreach (GameObject g in objects)
        {
            if (g.tag == "agent")
            {

               /* for (int i = 0; i < agentPositionSpeedMap[g.name].Count - 1; i++)
                {
                    if (Vector3.Distance(agentPositionSpeedMap[g.name][i].pos, agentPositionSpeedMap[g.name][i + 1].pos) >= 0.1f)
                    {
                        
                        float timediff =(float) Math.Ceiling((agentPositionSpeedMap[g.name][i + 1].time - agentPositionSpeedMap[g.name][i].time)*100)/100;
                        Debug.Log(timediff+" "+Time.fixedDeltaTime);
                        for (float j = Time.fixedDeltaTime; j <= timediff; j = j + Time.fixedDeltaTime)
                        {
                            Vector3 newPoint = Vector3.Lerp(agentPositionSpeedMap[g.name][i].pos, agentPositionSpeedMap[g.name][i + 1].pos, Time.fixedDeltaTime);
                            float newspeed = (agentPositionSpeedMap[g.name][i].speed + agentPositionSpeedMap[g.name][i + 1].speed) / 2;
                            agentPositionSpeedMap[g.name].Add(new PosSpeed(newPoint, newspeed, Time.fixedDeltaTime));
                        }
                    }

                }*/

                foreach (PosSpeed pos in agentPositionSpeedMap[g.name])
                {

                    int newX = (int)(30 * (pos.pos.x - bottomLeftX));
                    int newY = (int)(30 * (pos.pos.z - bottomLeftZ));
                    //this is the point on the 2d plane
                    Vector2 point = new Vector2(newX, newY);
                    
 
                   
                    float speed = pos.speed;
                    //float numberToBeAdded = (Mathf.Pow(speed + 1, -1.5f)) / 2;
                    int noOfAgents = Camera.main.GetComponent<bringUpMenu>().noOfAgents;

                    for (int x = newX - radius; x < newX + radius; x++)
                    {
                        for (int y = newY - radius; y < newY + radius; y++)
                        {
                            if (y < 0 || x < 0 || x > maxX || y > maxY)
                            {
                                continue;
                            }
                            point = new Vector2(x, y);
                            //add to list
                            if (allData.ContainsKey(point))
                            {
                                /*if (numberToBeAdded < .05f)
                                {
                                    numberToBeAdded = 0;
                                }
                                if (allData[point] < .05f)
                                {
                                    allData[point] = .05f;
                                }*/
                                //allData[point] = allData[point] + numberToBeAdded;
                                if(speed<0.5f)
                                {
                                    allData[point] = allData[point] + 0.5f;
                                }
                                else if(speed>=0.5 && speed <1)
                                {
                                    allData[point] = allData[point] + 0.2f;
                                }
                                else if(speed>=1)
                                {
                                    allData[point] = allData[point] + 0.1f;
                                }
                                

                            }
                            else
                            {
                                /*if (numberToBeAdded < .05f)
                                {
                                    numberToBeAdded = .05f;
                                }*/
                                if(speed==0)
                                {
                                    allData.Add(point, 0);
                                }
                                else if (speed>0 && speed < 0.5f)
                                {
                                    allData.Add(point, 0.5f);
                                }
                                else if (speed >= 0.5 && speed < 1)
                                {
                                    allData.Add(point, 0.2f);
                                }
                                else if (speed >= 1)
                                {
                                    allData.Add(point, 0.1f);
                                }
                  
                            }
                        }
                    }
                }


            }
        }
    }
}
