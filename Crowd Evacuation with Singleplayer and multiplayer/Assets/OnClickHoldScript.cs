using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class OnClickHoldScript : MonoBehaviour {

    public bool isRacePressed;
    // Use this for initialization
    void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

        if (isRacePressed)
        {
            if (this.gameObject.name.Equals("xposi"))
            {
                gameObject.transform.GetComponentInParent<ChangeWallDetails>().increaseXpos();
            }
            else if (this.gameObject.name.Equals("xposd"))
            {
                gameObject.transform.GetComponentInParent<ChangeWallDetails>().decreaseXpos();
            }
            else if (this.gameObject.name.Equals("zposi"))
            {
                gameObject.transform.GetComponentInParent<ChangeWallDetails>().increaseZpos();
            }
            else if (this.gameObject.name.Equals("zposd"))
            {
                gameObject.transform.GetComponentInParent<ChangeWallDetails>().decreaseZpos();
            }
            else if (this.gameObject.name.Equals("sincrease"))
            {
                gameObject.transform.GetComponentInParent<ChangeWallDetails>().increaseScale();
            }
            else if (this.gameObject.name.Equals("sdecrease"))
            {
                gameObject.transform.GetComponentInParent<ChangeWallDetails>().decreaseScale();
            }
        }

    }

    public void ActivateFlag()
    {
        isRacePressed = true;
    }

    public void DeactivateFlag()
    {
        isRacePressed = false;
    }


}
