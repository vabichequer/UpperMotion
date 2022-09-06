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
    public Communication CM;
    public enum Orientation {Left, Right};
    public Orientation orientation;
    public string recordingsFolder = "";
    public List<Vector3> lastGesture = new List<Vector3>();
    public delegate void OnGesturePerformanceDelegate();
    public event OnGesturePerformanceDelegate OnGesturePerformance;
	private List<Gesture> trainingSet = new List<Gesture>();
    private bool primaryButton, secondaryButton;
    private List<Point> positions = new List<Point>();
    private string message;
    private int strokeID = -1, interactionType = -1;
    void Start()
    {
        //Load pre-made gestures
		TextAsset[] gesturesXml = Resources.LoadAll<TextAsset>("GestureSet/10-stylus-MEDIUM/");
		foreach (TextAsset gestureXml in gesturesXml)
			trainingSet.Add(GestureIO.ReadGestureFromXML(gestureXml.text));

		//Load user custom gestures
		string[] filePaths = Directory.GetFiles(recordingsFolder, "*.xml");
		foreach (string filePath in filePaths)
			trainingSet.Add(GestureIO.ReadGestureFromFile(filePath));
    }

    void restartArrays()
    {        
        lastGesture = new List<Vector3>();
        positions = new List<Point>();
        strokeID = -1;
        interactionType = -1;
        OnGesturePerformance.Invoke();
    }

    void recordPositions()
    {
        Vector3 pos = Controller.transform.position;
        lastGesture.Add(pos);
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
        string fileName = String.Format("{0}/{1}-{2}.xml", recordingsFolder, IM.currentInteraction, DateTime.Now.ToFileTime());

        GestureIO.WriteGesture(positions.ToArray(), IM.currentInteraction, fileName);

        trainingSet.Add(new Gesture(positions.ToArray(), IM.currentInteraction));
    }
    
    void getButtons()
    {
        if (orientation == Orientation.Left)
        {
            primaryButton = Input.GetButton("XRI_Left_PrimaryButton");
            secondaryButton = Input.GetButton("XRI_Left_SecondaryButton");
        }
        else
        {
            primaryButton = Input.GetButton("XRI_Right_PrimaryButton");   
            secondaryButton = Input.GetButton("XRI_Right_SecondaryButton");
        }
    }

    // Update is called once per frame
    void Update()
    {
        getButtons();

        if (interactionType == -1)
        {
            if (primaryButton)
            {
                recordPositions();
                interactionType = 0;
                strokeID++;
            }

            if (secondaryButton)
            {
                recordPositions();
                interactionType = 1;
                strokeID++;
            }
        }
        else
        {   
            switch(interactionType)
            {
                case -1:
                    break;
                
                case 0:
                    if(!primaryButton)
                    {                    
                        Identify();
                        CM.sendMessage(message);
                        restartArrays();
                    }
                    else                 
                        recordPositions();
                    break;
                case 1:                
                    if(!secondaryButton)
                    {   
                        addGesture();
                        CM.sendMessage(IM.currentInteraction + " example added.");
                        restartArrays();
                    }
                    else
                    {
                        recordPositions();
                    }
                    break;

                default:                
                    break;
            }
        }
    }
}
