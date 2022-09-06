using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Animator))]

public class Awareness : MonoBehaviour
{
    public GameObject RightController, LeftController;

    protected Animator animator;
    public bool ikActive = false;
    public Transform rightHandObj = null;
    public Transform leftHandObj = null;
    public Transform lookObj = null;
    private bool reply = false;
    private List<Vector3> lastGesture = new List<Vector3>();
    private float accTime = 0;
    private int idx = 0;
    // Start is called before the first frame update
    void Start()
    {        
        animator = GetComponent<Animator>();
        RightController.GetComponent<GestureInterpreter>().OnGesturePerformance += GesturePerformanceRight;
        LeftController.GetComponent<GestureInterpreter>().OnGesturePerformance += GesturePerformanceLeft;
    }
    private void GesturePerformanceLeft()
    {
        Debug.Log("Left gesture performance");
        lastGesture = LeftController.GetComponent<GestureInterpreter>().lastGesture;
    }
    private void GesturePerformanceRight()
    {
        Debug.Log("Right gesture performance");
        lastGesture = RightController.GetComponent<GestureInterpreter>().lastGesture;
        reply = true;
    }

    void reset()
    {        
        reply = false;
        accTime = 0;
        idx = 0;
    }
    /*
    void OnAnimatorIK()
    {
        if(animator) 
        {

            //if the IK is active, set the position and rotation directly to the goal.
            if(ikActive) 
            {

                // Set the look target position, if one has been assigned
                if(lookObj != null) 
                {
                    animator.SetLookAtWeight(1);
                    animator.SetLookAtPosition(lookObj.position);
                }    

                // Set the right hand target position and rotation, if one has been assigned
                if(rightHandObj != null) 
                {
                    animator.SetIKPositionWeight(AvatarIKGoal.RightHand, 1);
                    animator.SetIKRotationWeight(AvatarIKGoal.RightHand, 1);  
                    animator.SetIKPosition(AvatarIKGoal.RightHand, rightHandObj.position);
                    animator.SetIKRotation(AvatarIKGoal.RightHand, rightHandObj.rotation);
                }        
                
                // Set the left hand target position and rotation, if one has been assigned
                if(rightHandObj != null) 
                {
                    animator.SetIKPositionWeight(AvatarIKGoal.LeftHand,1);
                    animator.SetIKRotationWeight(AvatarIKGoal.LeftHand,1);  
                    animator.SetIKPosition(AvatarIKGoal.LeftHand, leftHandObj.position);
                    animator.SetIKRotation(AvatarIKGoal.LeftHand, leftHandObj.rotation);
                }      

            }

            //if the IK is not active, set the position and rotation of the hand and head back to the original position
            else 
            {          
                animator.SetIKPositionWeight(AvatarIKGoal.RightHand, 0);
                animator.SetIKRotationWeight(AvatarIKGoal.RightHand, 0);
                animator.SetIKPositionWeight(AvatarIKGoal.LeftHand, 0);
                animator.SetIKRotationWeight(AvatarIKGoal.LeftHand, 0);
                animator.SetLookAtWeight(0);
            }
        }
    }    
    */
    // Update is called once per frame
    void Update()
    {        
        if (reply)
        {
            if (accTime > 1.0f/60.0f)
            {
                accTime = 0;                
                idx++;
                rightHandObj.transform.position = lastGesture[idx];
            }
            else
            {
                if (idx < lastGesture.Count)
                {
                    Debug.Log("Last gesture: " + lastGesture.Count + "| idx: " + idx);
                    accTime += Time.deltaTime;
                }
                else
                {
                    Debug.Log("FINISH | Last gesture: " + lastGesture.Count);
                    reset();
                }
            }
        }
    }
}
