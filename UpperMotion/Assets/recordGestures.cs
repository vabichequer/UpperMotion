using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
using System.Linq;

public class recordGestures : MonoBehaviour
{
    // Public
    public GameObject rightController, leftController, HMD, rightHandLine, leftHandLine;
    public string FilePath;

    // Private
    private List<Tuple<Vector3, Vector3>> lcPositions, rcPositions, hmdPositions;
    private List<List<Tuple<Vector3, Vector3>>> recLcPositions, recRcPositions, recHmdPositions;
    private List<string> recInteractionType, uniqueTypes;
    private bool leftPrimaryButton, rightPrimaryButton, isRecording = false;
    private enum Orientation {Left, Right};
    private Orientation orientation;
    private string currentInteraction;

    void restartArrays()
    {        
        lcPositions = new List<Tuple<Vector3, Vector3>>();
        rcPositions = new List<Tuple<Vector3, Vector3>>();
        hmdPositions = new List<Tuple<Vector3, Vector3>>();
    }

    void Start()
    { 
        restartArrays();
        recLcPositions = new List<List<Tuple<Vector3, Vector3>>>();
        recRcPositions = new List<List<Tuple<Vector3, Vector3>>>();
        recHmdPositions =  new List<List<Tuple<Vector3, Vector3>>>();
        recInteractionType = new List<string>();
        uniqueTypes = new List<string>(); 
    }

    void recordPositions(Orientation orientation)
    {        
        Debug.Log("Started recording from controller " + orientation);
        lcPositions.Add(Tuple.Create(leftController.transform.position, leftController.transform.rotation.eulerAngles));
        rcPositions.Add(Tuple.Create(rightController.transform.position, rightController.transform.rotation.eulerAngles));
        hmdPositions.Add(Tuple.Create(HMD.transform.position, HMD.transform.rotation.eulerAngles));

        if (orientation == Orientation.Left)
            currentInteraction = leftHandLine.GetComponent<InteractionManager>().currentInteraction;
        else
            currentInteraction = rightHandLine.GetComponent<InteractionManager>().currentInteraction;
    }

    void finishRecording(Orientation orientation)
    {
        Debug.Log("Stopped recording from controller " + orientation);
        recLcPositions.Add(lcPositions);
        recRcPositions.Add(rcPositions);
        recHmdPositions.Add(hmdPositions);
        recInteractionType.Add(currentInteraction);

        if (!uniqueTypes.Contains(currentInteraction))
            uniqueTypes.Add(currentInteraction);

        restartArrays();
    }

    // Update is called once per frame
    void Update()
    {
        leftPrimaryButton = Input.GetButton("XRI_Left_PrimaryButton");
        rightPrimaryButton = Input.GetButton("XRI_Right_PrimaryButton");

        if (!isRecording)
        {
            if (leftPrimaryButton)
            {
                orientation = Orientation.Left;
                recordPositions(orientation);
                isRecording = true;
            }
            else
            {
                if (rightPrimaryButton)
                {
                    orientation = Orientation.Right;
                    recordPositions(orientation);
                    isRecording = true;
                }
            }
        }
        else
        {   
            if (orientation == Orientation.Left)
            {
                if(!leftPrimaryButton)
                {                    
                    finishRecording(orientation);
                    isRecording = false;
                }
                else                 
                    recordPositions(orientation);
            }   
            else
            {
                if(!rightPrimaryButton)
                {
                    finishRecording(orientation);
                    isRecording = false;
                }
                else         
                    recordPositions(orientation);
            } 
        }


    }
    string generateHeading()
    {
        string[] device = {"lc ", "rc ", "hmd "};
        string[] axis = {"x, ", "y, ", "z"};
        string temp = "";

        for (int k = 0; k < device.Length; k++)
        {
            for (int i = 0; i < device.Length; i++)
                temp += device[k] + axis[i];
            
            temp += ", ";

            for (int i = 0; i < device.Length; i++)
                temp += device[k] + 'r' + axis[i];

            if (k != device.Length - 1) 
                temp += ", ";
        }

        return temp;
    }
    string decodeTransform(Vector3 v)
    {
        string temp = "";

        temp = v.x + ", " + v.y + ", " + v.z;

        return temp;
    }
    void OnApplicationQuit()
    { 
        string[] files = Directory.GetFiles(FilePath);

        List<int> numberOfRecordings = new List<int>();

        for (int i = 0; i < uniqueTypes.Count; i++)
            numberOfRecordings.Add(0);

        if (files.Length > 0)
        {
            foreach (string filename in files)
            {
                string[] substrings = filename.Split("_");
                int lastBackSlash = substrings[0].LastIndexOf(@"\") + 1;

                string interaction = substrings[0].Substring(lastBackSlash);

                int idx = uniqueTypes.IndexOf(interaction);

                if (idx >= 0)
                    numberOfRecordings[idx] += 1;
            }
        }

        for (int i = 0; i < recInteractionType.Count; i++)
        {            
            lcPositions = recLcPositions[i];
            rcPositions = recRcPositions[i];
            hmdPositions = recHmdPositions[i];

            int idx = uniqueTypes.IndexOf(recInteractionType[i]), version;

            if (idx >= 0)
                version = numberOfRecordings[idx];
            else
                version = 0;

            StreamWriter writer = new StreamWriter(new FileStream(FilePath + '/' + recInteractionType[i] + '_' + version + ".csv", FileMode.Create, FileAccess.Write));
            writer.WriteLine(generateHeading());
            for (int j =  0; j < lcPositions.Count; j++)
            {
                string lcStr = decodeTransform(lcPositions[j].Item1) + ", " + decodeTransform(lcPositions[j].Item2);
                string rcStr = decodeTransform(rcPositions[j].Item1) + ", " + decodeTransform(rcPositions[j].Item2);
                string hmdStr = decodeTransform(hmdPositions[j].Item1) + ", " + decodeTransform(hmdPositions[j].Item2);
                        
                writer.WriteLine(lcStr + ", " + rcStr + ", " + hmdStr);
            }
            writer.Close();            
            numberOfRecordings[idx] += 1; 
        }
    }
}