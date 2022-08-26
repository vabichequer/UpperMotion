using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using PDollarGestureRecognizer;
using System;

/*
    This script is based on the Demo.cs from the PDollar package. Please refer to it for 
    further explanations on the used variables.
*/

public class GestureInterpreter : MonoBehaviour
{    
    public GameObject Controller;
    public InteractionManager IM;
    public enum Orientation {Left, Right};
    public Orientation orientation;
	private List<Gesture> trainingSet = new List<Gesture>();
    private bool primaryButton, secondaryButton;
    private List<Point> positions = new List<Point>();
    private string currentInteraction, primaryButtonId, secondaryButtonId, message;
    private int strokeID = -1, interaction = -1;
    private TouchScreenKeyboard overlayKeyboard;
    void Start()
    {
        //Load pre-made gestures
		TextAsset[] gesturesXml = Resources.LoadAll<TextAsset>("GestureSet/10-stylus-MEDIUM/");
		foreach (TextAsset gestureXml in gesturesXml)
			trainingSet.Add(GestureIO.ReadGestureFromXML(gestureXml.text));

		//Load user custom gestures
		string[] filePaths = Directory.GetFiles(Application.persistentDataPath, "*.xml");
		foreach (string filePath in filePaths)
			trainingSet.Add(GestureIO.ReadGestureFromFile(filePath));

        if (orientation == Orientation.Right)
        {
            primaryButtonId = "XRI_Right_PrimaryButton";
            secondaryButtonId = "XRI_Right_SecondaryButton";
        }
        else
        {
            primaryButtonId = "XRI_Left_PrimaryButton";
            secondaryButtonId = "XRI_Left_SecondaryButton";
        }
    }

    void restartArrays()
    {        
        positions = new List<Point>();
        strokeID = -1;
    }

    void recordPositions()
    {
        Vector3 pos = Controller.transform.position;
        positions.Add(new Point(pos.x, pos.y, strokeID));
   }

    void Identify()
    {
        Gesture candidate = new Gesture(positions.ToArray());
        Result gestureResult = PointCloudRecognizer.Classify(candidate, trainingSet.ToArray());
			
		message = gestureResult.GestureClass + " " + gestureResult.Score;
    }

    void addGesture()
    {          
        string fileName = String.Format("{0}/{1}-{2}.xml", Application.persistentDataPath, IM.currentInteraction, DateTime.Now.ToFileTime());

        Debug.Log("The path is: " + fileName);

        GestureIO.WriteGesture(positions.ToArray(), IM.currentInteraction, fileName);

        trainingSet.Add(new Gesture(positions.ToArray(), IM.currentInteraction));
    }
    
    // Update is called once per frame
    void Update()
    {
        primaryButton = Input.GetButton(primaryButtonId);
        secondaryButton = Input.GetButton(secondaryButtonId);

        if (interaction == -1)
        {
            if (primaryButton)
            {
                recordPositions();
                interaction = 0;
                strokeID++;
            }

            if (secondaryButton)
            {
                recordPositions();
                interaction = 1;
                strokeID++;
            }
        }
        else
        {   
            switch(interaction)
            {
                case -1:
                    break;
                
                case 0:
                    if(!primaryButton)
                    {                    
                        Identify();
                        Debug.Log(message);
                        restartArrays();
                        interaction = -1;
                    }
                    else                 
                        recordPositions();
                    break;
                case 1:                
                    if(!secondaryButton)
                    {   
                        Debug.Log("Case 1");
                        addGesture();
                        restartArrays();
                        interaction = -1;
                    }
                    else
                    {
                        recordPositions();
                        Debug.Log("Case -1");
                    }
                    break;

                default:                
                    break;
            }
        }
    }
}
