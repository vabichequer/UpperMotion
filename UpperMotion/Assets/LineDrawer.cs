using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using TMPro;

public class LineDrawer : MonoBehaviour
{
    public LineRenderer LineRendererObject;
    public enum Orientation {Left, Right};
    public Orientation orientation;
    public GameObject WandPoint;
    public string FilePath;
    public GameObject display;
    public string[] interactions;    
    bool primaryButton, secondaryButton, incremented = false;
    public float trigger, grip;
    int idx = 0;

    void Start()
    {
        if (interactions.Length == 0)
        {
            string controller;
            if (orientation == Orientation.Left)
                controller = "left";
            else
                controller = "right";

            Debug.LogWarning("No interaction types set for controller " + controller);
        }
    }

    void getButtons()
    {
        if (orientation == Orientation.Left)
        {
            primaryButton = Input.GetButton("XRI_Left_PrimaryButton");
            secondaryButton = Input.GetButton("XRI_Left_SecondaryButton");
            trigger = Input.GetAxis("XRI_Left_Trigger");
            grip = Input.GetAxis("XRI_Left_Grip");
        }
        else
        {
            primaryButton = Input.GetButton("XRI_Right_PrimaryButton");  
            secondaryButton = Input.GetButton("XRI_Right_SecondaryButton"); 
            trigger = Input.GetAxis("XRI_Right_Trigger");
            grip = Input.GetAxis("XRI_Right_Grip");
        }
    }

    void updateLRO(int size, Vector3 pos)
    {
        LineRendererObject.positionCount = size;
        LineRendererObject.SetPosition(size - 1, pos);
    }

    // Update is called once per frame
    void Update()
    {   
        getButtons();  

        if (primaryButton)
            updateLRO(LineRendererObject.positionCount + 1, WandPoint.transform.position);
        else        
            updateLRO(1, WandPoint.transform.position);

        if (interactions.Length > 0)
        {
            if (grip > 0.9)
            {
                display.SetActive(true);
                display.GetComponent<TextMeshPro>().text = interactions[idx];

                if (trigger > 0.99 && !incremented)
                {                
                    if (idx < interactions.Length - 1)
                        idx = idx + 1;
                    else 
                        idx = 0;
                        
                    display.GetComponent<TextMeshPro>().text = interactions[idx];
                    incremented = true;
                }
                else
                {
                    if (trigger < 0.99)
                        incremented = false;
                }
            }
            else
            {
                display.SetActive(false);
                incremented = false;
            }
        }
    }

    void OnApplicationQuit()
    { 
        /*
        StreamWriter writer = new StreamWriter(FilePath);
 
        writer.WriteLine("Inventory,OnlyX");
 
        
        for (int i = 0; i < inventory.Count; ++i)
        {
 
            writer.WriteLine(inventory[i]);
 
        }
        for (int j = 0; j < OnlyX.Count; ++j)
        {
 
            writer.WriteLine("," + OnlyX[j]);
        }
        */
    }
}
