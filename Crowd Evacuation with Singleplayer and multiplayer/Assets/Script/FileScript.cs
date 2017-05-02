using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Xml;
using System.ComponentModel;
using System.Text;
using System.IO;
using System.Net;
using UnityEngine.SceneManagement;


public class FileScript : MonoBehaviour
{
    public static List<List<Transform>> tempListList;
    public static float time;
	public static bool checkedHM=false;
	public static bool replayFlag=false;
	public static bool checkedBHM=false;
    public bool flag;
    bool headFlag = false;
	public Text mytext;
	public GameObject heatPlane;
	private IEnumerator coroutine;
    // Use this for initialization
    void Start()
    {
        flag = false;
        headFlag = false;
        tempListList = new List<List<Transform>>();
        time = 0;
        FileScript.time = bringUpMenu.mytimer;
    }

    // Update is called once per frame

    public void createXML()
    {
        if (!flag)
        {

            flag = true;
               // Debug.Log("no xml file yet");
				//WebClient web=new WebClient();
				//web.Credentials = new System.Net.NetworkCredential("username", "password");
				//String xml=web.DownloadString(new Uri("https://crowdevac.com/XMLUserData/"+ SceneManager.GetActiveScene().name + ".xml"));
				//web.DownloadFile(new Uri("https://crowdevac.com/XMLUserData/"+ SceneManager.GetActiveScene().name + ".xml"), SceneManager.GetActiveScene().name + ".xml");
                //XmlDocument doc = new XmlDocument();
				//Application.OpenURL("http://localhost/store_data.php?scene="+SceneManager.GetActiveScene().name);
				//WebRequest request = WebRequest.Create("http://localhost/store_data.php?scene="+SceneManager.GetActiveScene().name);
 
							
				//request.Method="GET";
				//WebResponse response = request.GetResponse();
				//Stream stream=response.GetResponseStream();
				//StreamReader reader = new StreamReader(stream, Encoding.UTF8);
				//String xml = reader.ReadToEnd();
				
				XmlDocument doc = new XmlDocument();
				doc.LoadXml("<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<document>\n</document>");
				XmlNode document = doc.SelectSingleNode("document");

                XmlNode userdata = doc.CreateElement("User-Data");
                document.AppendChild(userdata);

           // Debug.Log("name "+nameStore.name);
                XmlNode playerid = doc.CreateElement("Player-ID");
                playerid.InnerText=nameStore.name;
                userdata.AppendChild(playerid);
				
				XmlNode runid = doc.CreateElement("Run-ID");
                runid.InnerText=nameStore.runId.ToString();
                userdata.AppendChild(runid);
				
				XmlNode replay = doc.CreateElement("Replay");
                replay.InnerText=FileScript.replayFlag.ToString();
                userdata.AppendChild(replay);
				
				XmlNode chm = doc.CreateElement("Checked-Heatmap");
                chm.InnerText=FileScript.checkedHM.ToString();
                userdata.AppendChild(chm);
				FileScript.checkedHM=false;

				XmlNode cbhm = doc.CreateElement("Checked-BestHeatmap");
                cbhm.InnerText=FileScript.checkedBHM.ToString();
                userdata.AppendChild(cbhm);


            int l = Camera.main.gameObject.GetComponent<bringUpMenu>().losDD.GetComponent<Dropdown>().value;
            string losstr = Camera.main.gameObject.GetComponent<bringUpMenu>().losDD.GetComponent<Dropdown>().options[l].text;

            l = Camera.main.gameObject.GetComponent<bringUpMenu>().loaDD.GetComponent<Dropdown>().value;
            string loastr = Camera.main.gameObject.GetComponent<bringUpMenu>().loaDD.GetComponent<Dropdown>().options[l].text;

            l = Camera.main.gameObject.GetComponent<bringUpMenu>().lohDD.GetComponent<Dropdown>().value;
            string homostr = Camera.main.gameObject.GetComponent<bringUpMenu>().lohDD.GetComponent<Dropdown>().options[l].text;

            XmlNode los = doc.CreateElement("LevelOfService");
                los.InnerText = losstr;
                userdata.AppendChild(los);



            XmlNode loa = doc.CreateElement("LevelOfAggression");
            loa.InnerText = loastr;
            userdata.AppendChild(loa);

            XmlNode homo = doc.CreateElement("Homogeneity");
            homo.InnerText = homostr;
            userdata.AppendChild(homo);

            XmlNode wallsnode = doc.CreateElement("Walls");
                userdata.AppendChild(wallsnode);
            //Debug.Log("hey hello " + tempListList[0].Count);
                foreach(Transform wall in tempListList[0])
                {
                    XmlNode wallnode = doc.CreateElement("Wall");
                    wallsnode.AppendChild(wallnode);

                    XmlNode position = doc.CreateElement("Position");
                    XmlNode rotation = doc.CreateElement("Rotation");
                    XmlNode scale = doc.CreateElement("Scale");
                    wallnode.AppendChild(position);
                    wallnode.AppendChild(rotation);
                    wallnode.AppendChild(scale);

                    XmlNode pxnode = doc.CreateElement("X");
                    pxnode.InnerText = wall.position.x.ToString();
                    XmlNode pynode = doc.CreateElement("Y");
                    pynode.InnerText = wall.position.y.ToString();
                    XmlNode pznode = doc.CreateElement("Z");
                    pznode.InnerText = wall.position.z.ToString();

                    position.AppendChild(pxnode);
                    position.AppendChild(pynode);
                    position.AppendChild(pznode);

                    //rotation
                    XmlNode rxnode = doc.CreateElement("X");
                    rxnode.InnerText = wall.rotation.x.ToString();
                    XmlNode rynode = doc.CreateElement("Y");
                    rynode.InnerText = wall.rotation.y.ToString();
                    XmlNode rznode = doc.CreateElement("Z");
                    rznode.InnerText = wall.rotation.z.ToString();

                    rotation.AppendChild(rxnode);
                    rotation.AppendChild(rynode);
                    rotation.AppendChild(rznode);


                    //scale

                    XmlNode sxnode = doc.CreateElement("X");
                    sxnode.InnerText = wall.localScale.x.ToString();
                    XmlNode synode = doc.CreateElement("Y");
                    synode.InnerText = wall.localScale.y.ToString();
                    XmlNode sznode = doc.CreateElement("Z");
                    sznode.InnerText = wall.localScale.z.ToString();

                    scale.AppendChild(sxnode);
                    scale.AppendChild(synode);
                    scale.AppendChild(sznode);
                }

                XmlNode doorsnode = doc.CreateElement("Doors");
                userdata.AppendChild(doorsnode);

                foreach (Transform door in tempListList[1])
                {
                    XmlNode doornode = doc.CreateElement("Door");
                    doorsnode.AppendChild(doornode);

                    XmlNode position = doc.CreateElement("Position");
                    XmlNode rotation = doc.CreateElement("Rotation");
                    XmlNode scale = doc.CreateElement("Scale");
                    doornode.AppendChild(position);
                    doornode.AppendChild(rotation);
                    doornode.AppendChild(scale);

                    XmlNode pxnode = doc.CreateElement("X");
                    pxnode.InnerText = door.position.x.ToString();
                    XmlNode pynode = doc.CreateElement("Y");
                    pynode.InnerText = door.position.y.ToString();
                    XmlNode pznode = doc.CreateElement("Z");
                    pznode.InnerText = door.position.z.ToString();

                    position.AppendChild(pxnode);
                    position.AppendChild(pynode);
                    position.AppendChild(pznode);

                    //rotation
                    XmlNode rxnode = doc.CreateElement("X");
                    rxnode.InnerText = door.rotation.x.ToString();
                    XmlNode rynode = doc.CreateElement("Y");
                    rynode.InnerText = door.rotation.y.ToString();
                    XmlNode rznode = doc.CreateElement("Z");
                    rznode.InnerText = door.rotation.z.ToString();

                    rotation.AppendChild(rxnode);
                    rotation.AppendChild(rynode);
                    rotation.AppendChild(rznode);


                    //scale

                    XmlNode sxnode = doc.CreateElement("X");
                    sxnode.InnerText = door.localScale.x.ToString();
                    XmlNode synode = doc.CreateElement("Y");
                    synode.InnerText = door.localScale.y.ToString();
                    XmlNode sznode = doc.CreateElement("Z");
                    sznode.InnerText = door.localScale.z.ToString();

                    scale.AppendChild(sxnode);
                    scale.AppendChild(synode);
                    scale.AppendChild(sznode);
                }

                XmlNode pillarsnode = doc.CreateElement("Pillars");
                userdata.AppendChild(pillarsnode);

                foreach (Transform pillar in tempListList[2])
                {
                    XmlNode pillarnode = doc.CreateElement("Pillar");
                    pillarsnode.AppendChild(pillarnode);

                    XmlNode position = doc.CreateElement("Position");
                    XmlNode rotation = doc.CreateElement("Rotation");
                    XmlNode scale = doc.CreateElement("Scale");
                    pillarnode.AppendChild(position);
                    pillarnode.AppendChild(rotation);
                    pillarnode.AppendChild(scale);

                    XmlNode pxnode = doc.CreateElement("X");
                    pxnode.InnerText = pillar.position.x.ToString();
                    XmlNode pynode = doc.CreateElement("Y");
                    pynode.InnerText = pillar.position.y.ToString();
                    XmlNode pznode = doc.CreateElement("Z");
                    pznode.InnerText = pillar.position.z.ToString();

                    position.AppendChild(pxnode);
                    position.AppendChild(pynode);
                    position.AppendChild(pznode);

                    //rotation
                    XmlNode rxnode = doc.CreateElement("X");
                    rxnode.InnerText = pillar.rotation.x.ToString();
                    XmlNode rynode = doc.CreateElement("Y");
                    rynode.InnerText = pillar.rotation.y.ToString();
                    XmlNode rznode = doc.CreateElement("Z");
                    rznode.InnerText = pillar.rotation.z.ToString();

                    rotation.AppendChild(rxnode);
                    rotation.AppendChild(rynode);
                    rotation.AppendChild(rznode);


                    //scale

                    XmlNode sxnode = doc.CreateElement("X");
                    sxnode.InnerText = pillar.localScale.x.ToString();
                    XmlNode synode = doc.CreateElement("Y");
                    synode.InnerText = pillar.localScale.y.ToString();
                    XmlNode sznode = doc.CreateElement("Z");
                    sznode.InnerText = pillar.localScale.z.ToString();

                    scale.AppendChild(sxnode);
                    scale.AppendChild(synode);
                    scale.AppendChild(sznode);
                }



                XmlNode timenode = doc.CreateElement("Time-Elapsed");
                timenode.InnerText = ""+ bringUpMenu.mytimer;
                userdata.AppendChild(timenode);
				
					MemoryStream mStream = new MemoryStream();
					XmlTextWriter writer = new XmlTextWriter(mStream, Encoding.Unicode);
					writer.Formatting = Formatting.Indented;
					doc.WriteContentTo(writer);
					writer.Flush();
					mStream.Flush();
					mStream.Position = 0;
					StreamReader sReader = new StreamReader(mStream);
					//doc.Save("C:\\Users\\NILAY\\Desktop\\temp1.xml");
					string xml=sReader.ReadToEnd();
            //Debug.Log(xml.Length);
            //var fileStream = File.Create("C:\\Users\\NILAY\\Desktop\\temp.xml");
            /*StreamWriter swr=new StreamWriter(fileStream);
            swr.WriteLine(xml);
            sReader = new StreamReader(fileStream);
            string tempval=sReader.ReadToEnd();
            Debug.Log(tempval.Length);
        Debug.Log("hello"+xml.ToString()+"hello");*/
            //request = WebRequest.Create("http://localhost/store_data.php");
            //request.Method="POST";

#if UNITY_EDITOR
            string url= "http://spanky.rutgers.edu/crowdevacgame/Real/store_data.php";
#else
            string url ;
            if(InternetConnectivityCheck.adminFlag)
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/experimental/store_data.php";
            }
            else
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/Real/store_data.php";
            }
 
#endif
            //--for local
            //var response : Response = new Response();
            //mytext.text=SceneManager.GetActiveScene().name;
            WWWForm loginForm = new WWWForm();
                
                if(SceneManager.GetActiveScene().name.Contains("SinglePlayer"))
                {
                    loginForm.AddField("type", "sp", System.Text.Encoding.UTF8);
                }
                else
                {
                    loginForm.AddField("type", "mp", System.Text.Encoding.UTF8);
                }
				loginForm.AddField("scene",SceneManager.GetActiveScene().name,System.Text.Encoding.UTF8);
				loginForm.AddField("querystring", xml,System.Text.Encoding.UTF8);
        
        // Sending request:
        WWW www = new WWW(url, loginForm); 
		coroutine=WaitForRequest(www);
		StartCoroutine(coroutine);
		
		Dictionary<Vector2, float> points = Camera.main.GetComponent<collectResults>().allData;
        //SpeedAndPosition[] speedPoints = mainCam.GetComponent<collectResults>().speedAndPos.ToArray();
        //Texture2D tex = Heatmap.CreateHeatmap(points, mainCam, 5);
        Texture2D tex = Heatmap.CreateHeatmap(points, Camera.main, heatPlane);
		
		byte[] bytes = tex.EncodeToPNG();

            //FileStream fs=new FileStream(Application.dataPath+"/"+SceneManager.GetActiveScene().name+".png",FileMode.Create,FileAccess.ReadWrite);
            //fs.Write(bytes,0,bytes.Length);
            //fs.Close();

#if UNITY_EDITOR
            url= "http://spanky.rutgers.edu/crowdevacgame/Real/store_image.php"; //-- local
#else
            if(InternetConnectivityCheck.adminFlag)
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/experimental/store_image.php";
            }
            else
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/Real/store_image.php";
            }

#endif

            loginForm = new WWWForm();

            if (SceneManager.GetActiveScene().name.Contains("SinglePlayer"))
            {
                loginForm.AddField("type", "sp", System.Text.Encoding.UTF8);
            }
            else
            {
                loginForm.AddField("type", "mp", System.Text.Encoding.UTF8);
            }

            loginForm.AddField("scene",SceneManager.GetActiveScene().name,System.Text.Encoding.UTF8);
		loginForm.AddField("runid",nameStore.runId,System.Text.Encoding.UTF8);
		loginForm.AddBinaryData("fileUpload",bytes);
		
		www = new WWW(url, loginForm); 
		coroutine=WaitForRequest(www);
		StartCoroutine(coroutine);

            // Waiting for response:
            //yield httpResponse;


            //doc.Save(SceneManager.GetActiveScene().name + ".xml");
            //web.UploadFile ("https://crowdevac.com/XMLUserData/",SceneManager.GetActiveScene ().name + ".xml");
            //}


            GridScript gs = GameObject.Find("GameController").GetComponent<GridScript>();
            //Debug.Log("fff"+gs.worldPoints.Count);
            GridCell[,] grid = gs.grid;
            //SpeedAndPosition[] speedPoints = mainCam.GetComponent<collectResults>().speedAndPos.ToArray();
            //Texture2D tex = Heatmap.CreateHeatmap(points, mainCam, 5);
            Texture2D tex1 = HeatmapActual.CreateHeatmap(grid, Camera.main, heatPlane);


            byte[] bytes1 = tex1.EncodeToPNG();

            //FileStream fs=new FileStream(Application.dataPath+"/"+SceneManager.GetActiveScene().name+".png",FileMode.Create,FileAccess.ReadWrite);
            //fs.Write(bytes,0,bytes.Length);
            //fs.Close();

#if UNITY_EDITOR
            url = "http://spanky.rutgers.edu/crowdevacgame/Real/store_heatmap_image.php"; //-- local
#else
            if(InternetConnectivityCheck.adminFlag)
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/experimental/store_heatmap_image.php";
            }
            else
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/Real/store_heatmap_image.php";
            }

#endif

            loginForm = new WWWForm();

            if (SceneManager.GetActiveScene().name.Contains("SinglePlayer"))
            {
                loginForm.AddField("type", "sp", System.Text.Encoding.UTF8);
            }
            else
            {
                loginForm.AddField("type", "mp", System.Text.Encoding.UTF8);
            }

            loginForm.AddField("scene", SceneManager.GetActiveScene().name, System.Text.Encoding.UTF8);
            loginForm.AddField("runid", nameStore.runId, System.Text.Encoding.UTF8);
            loginForm.AddBinaryData("fileUpload", bytes1);

            www = new WWW(url, loginForm);
            coroutine = WaitForRequest(www);
            StartCoroutine(coroutine);



            Dictionary<Vector2, float> points2 = Camera.main.GetComponent<collectResults>().allData;
            //SpeedAndPosition[] speedPoints = mainCam.GetComponent<collectResults>().speedAndPos.ToArray();
            //Texture2D tex = Heatmap.CreateHeatmap(points, mainCam, 5);

            GameObject[] walls = GameObject.FindGameObjectsWithTag("wall");
            GameObject[] outers = GameObject.FindGameObjectsWithTag("outerWall");
            GameObject[] pillars = GameObject.FindGameObjectsWithTag("pillar");


            List<GameObject> totals = new List<GameObject>();

            int count = 0;
            foreach(GameObject wall in walls)
            {
                totals.Add(wall);
            }
            foreach(GameObject outer in outers)
            {
                totals.Add(outer);
            }
            foreach(GameObject pillar in pillars)
            {
                totals.Add(pillar);
            }

            Texture2D tex2 = Heatmap.CreateHeatmapFull(points2,totals.ToArray(), Camera.main, heatPlane);

            byte[] bytes2 = tex2.EncodeToPNG();

            //FileStream fs=new FileStream(Application.dataPath+"/"+SceneManager.GetActiveScene().name+".png",FileMode.Create,FileAccess.ReadWrite);
            //fs.Write(bytes,0,bytes.Length);
            //fs.Close();

#if UNITY_EDITOR
            url = "http://spanky.rutgers.edu/crowdevacgame/Real/store_image_full.php"; //-- local
#else
            if(InternetConnectivityCheck.adminFlag)
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/experimental/store_image_full.php";
            }
            else
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/Real/store_image_full.php";
            }

#endif

            loginForm = new WWWForm();

            if (SceneManager.GetActiveScene().name.Contains("SinglePlayer"))
            {
                loginForm.AddField("type", "sp", System.Text.Encoding.UTF8);
            }
            else
            {
                loginForm.AddField("type", "mp", System.Text.Encoding.UTF8);
            }

            loginForm.AddField("scene", SceneManager.GetActiveScene().name, System.Text.Encoding.UTF8);
            loginForm.AddField("runid", nameStore.runId, System.Text.Encoding.UTF8);
            loginForm.AddBinaryData("fileUpload", bytes2);

            www = new WWW(url, loginForm);
            coroutine = WaitForRequest(www);
            StartCoroutine(coroutine);

            // Waiting for response:
            //yield httpResponse;


            //doc.Save(SceneManager.GetActiveScene().name + ".xml");
            //web.UploadFile ("https://crowdevac.com/XMLUserData/",SceneManager.GetActiveScene ().name + ".xml");
            //}


            GridScript gs3 = GameObject.Find("GameController").GetComponent<GridScript>();
            //Debug.Log("fff"+gs.worldPoints.Count);
            GridCell[,] grid3 = gs3.grid;
            //SpeedAndPosition[] speedPoints = mainCam.GetComponent<collectResults>().speedAndPos.ToArray();
            //Texture2D tex = Heatmap.CreateHeatmap(points, mainCam, 5);

            Texture2D tex3 = HeatmapActual.CreateHeatmapFull(grid3,totals.ToArray(), Camera.main, heatPlane);


            byte[] bytes3 = tex3.EncodeToPNG();

            //FileStream fs=new FileStream(Application.dataPath+"/"+SceneManager.GetActiveScene().name+".png",FileMode.Create,FileAccess.ReadWrite);
            //fs.Write(bytes,0,bytes.Length);
            //fs.Close();

#if UNITY_EDITOR
            url = "http://spanky.rutgers.edu/crowdevacgame/Real/store_heatmap_image_full.php"; //-- local
#else
            if(InternetConnectivityCheck.adminFlag)
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/experimental/store_heatmap_image_full.php";
            }
            else
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/Real/store_heatmap_image_full.php";
            }

#endif

            loginForm = new WWWForm();

            if (SceneManager.GetActiveScene().name.Contains("SinglePlayer"))
            {
                loginForm.AddField("type", "sp", System.Text.Encoding.UTF8);
            }
            else
            {
                loginForm.AddField("type", "mp", System.Text.Encoding.UTF8);
            }

            loginForm.AddField("scene", SceneManager.GetActiveScene().name, System.Text.Encoding.UTF8);
            loginForm.AddField("runid", nameStore.runId, System.Text.Encoding.UTF8);
            loginForm.AddBinaryData("fileUpload", bytes3);

            www = new WWW(url, loginForm);
            coroutine = WaitForRequest(www);
            StartCoroutine(coroutine);


            //SpeedAndPosition[] speedPoints = mainCam.GetComponent<collectResults>().speedAndPos.ToArray();
            //Texture2D tex = Heatmap.CreateHeatmap(points, mainCam, 5);

            Texture2D tex4 = HeatmapActual.CreateLayoutImage(totals.ToArray(), Camera.main, heatPlane);


            byte[] bytes4 = tex4.EncodeToPNG();

            //FileStream fs=new FileStream(Application.dataPath+"/"+SceneManager.GetActiveScene().name+".png",FileMode.Create,FileAccess.ReadWrite);
            //fs.Write(bytes,0,bytes.Length);
            //fs.Close();

#if UNITY_EDITOR
            url = "http://spanky.rutgers.edu/crowdevacgame/Real/store_layout_image.php"; //-- local
#else
            if(InternetConnectivityCheck.adminFlag)
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/experimental/store_layout_image.php";
            }
            else
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/Real/store_layout_image.php";
            }

#endif

            loginForm = new WWWForm();

            if (SceneManager.GetActiveScene().name.Contains("SinglePlayer"))
            {
                loginForm.AddField("type", "sp", System.Text.Encoding.UTF8);
            }
            else
            {
                loginForm.AddField("type", "mp", System.Text.Encoding.UTF8);
            }

            loginForm.AddField("scene", SceneManager.GetActiveScene().name, System.Text.Encoding.UTF8);
            loginForm.AddField("runid", nameStore.runId, System.Text.Encoding.UTF8);
            loginForm.AddBinaryData("fileUpload", bytes4);

            www = new WWW(url, loginForm);
            coroutine = WaitForRequest(www);
            StartCoroutine(coroutine);




            GridScript gs4 = GameObject.Find("GameController").GetComponent<GridScript>();
            //Debug.Log("fff"+gs.worldPoints.Count);
            GridCell[,] grid4 = gs3.grid;


            //SpeedAndPosition[] speedPoints = mainCam.GetComponent<collectResults>().speedAndPos.ToArray();
            //Texture2D tex = Heatmap.CreateHeatmap(points, mainCam, 5);

            int index = 0;

            //int[] agentcountArray = new int[grid4.GetLength(0)*grid4.GetLength(1)];

            string data="";
            for(int i=0;i<grid4.GetLength(0);i++)
            {
                for(int j=0;j<grid4.GetLength(1);j++)
                {
                    //agentcountArray[index++] = (int) grid4[i, j].agentCount;
                    data = data + (int)grid4[i, j].agentCount+",";

                }
            }

            data = data.TrimEnd(',');


            //FileStream fs=new FileStream(Application.dataPath+"/"+SceneManager.GetActiveScene().name+".png",FileMode.Create,FileAccess.ReadWrite);
            //fs.Write(bytes,0,bytes.Length);
            //fs.Close();

#if UNITY_EDITOR
            url = "http://spanky.rutgers.edu/crowdevacgame/Real/store_heatmapCSV.php"; //-- local
#else
            if(InternetConnectivityCheck.adminFlag)
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/experimental/store_heatmapCSV.php";
            }
            else
            {
                url = "http://spanky.rutgers.edu/crowdevacgame/Real/store_heatmapCSV.php";
            }

#endif

            loginForm = new WWWForm();

            if (SceneManager.GetActiveScene().name.Contains("SinglePlayer"))
            {
                loginForm.AddField("type", "sp", System.Text.Encoding.UTF8);
            }
            else
            {
                loginForm.AddField("type", "mp", System.Text.Encoding.UTF8);
            }

            loginForm.AddField("scene", SceneManager.GetActiveScene().name, System.Text.Encoding.UTF8);
            loginForm.AddField("runid", nameStore.runId, System.Text.Encoding.UTF8);
            loginForm.AddField("row", grid4.GetLength(0).ToString(), System.Text.Encoding.UTF8);
            loginForm.AddField("col", (grid4.GetLength(1)).ToString(), System.Text.Encoding.UTF8);
            loginForm.AddField("data", data);

            www = new WWW(url, loginForm);
            coroutine = WaitForRequest(www);
            StartCoroutine(coroutine);
        }
    }
	
IEnumerator WaitForRequest(WWW www)
 {
     yield return www;
     // check for errors
     if (www.error == null)
     {
         //mytext.text="WWW Ok!: " + www.data;
     } else {
         //mytext.text="WWW Error: "+ www.error;
     }    
 }    
}