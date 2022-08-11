using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RecordPositions : MonoBehaviour
{
    public GameObject LeftController, RightController;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float trigger_left = Input.GetAxis("XRI_Left_Trigger");
        float trigger_right = Input.GetAxis("XRI_Right_Trigger");

        bool button_a_left = Input.GetButton("XRI_Left_PrimaryButton");
        bool button_a_right = Input.GetButton("XRI_Right_PrimaryButton");

        if (button_a_right)
        {
            
        }
    }
}
