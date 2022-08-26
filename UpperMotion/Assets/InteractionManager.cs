using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class InteractionManager : MonoBehaviour
{
    public LineRenderer LineRendererObject;
    public enum Orientation {Left, Right};
    public Material teachMaterial, performMaterial;
    public Orientation orientation;
    public GameObject WandPoint, display;
    public string currentInteraction;
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

    void updateLRO(int size, Vector3 pos, Material mat)
    {
        LineRendererObject.positionCount = size;
        LineRendererObject.SetPosition(size - 1, pos);
        LineRendererObject.material = mat;
    }

    // Update is called once per frame
    void Update()
    {   
        getButtons();  

        if (primaryButton)     
            updateLRO(LineRendererObject.positionCount + 1, WandPoint.transform.position, performMaterial);
        else
        {
            if (secondaryButton)          
                updateLRO(LineRendererObject.positionCount + 1, WandPoint.transform.position, teachMaterial);
            else
                updateLRO(1, WandPoint.transform.position, performMaterial);
        }


        if (interactions.Length > 0)
        {
            if (grip > 0.9)
            {
                display.SetActive(true);

                if (trigger > 0.99 && !incremented)
                {                
                    if (idx < interactions.Length - 1)
                        idx = idx + 1;
                    else 
                        idx = 0;
                        
                    incremented = true;
                }
                else
                {
                    if (trigger < 0.99)
                        incremented = false;
                }
                
                display.GetComponent<TextMeshPro>().text = interactions[idx];
            }
            else
            {
                display.SetActive(false);
                incremented = false;
            }
            
            currentInteraction = interactions[idx];
        }
    }
}
