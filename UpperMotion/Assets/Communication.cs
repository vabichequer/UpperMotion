using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Communication : MonoBehaviour
{
    public GameObject popupText;
    public int duration;
    private float accTime, fadeDuration;
    private bool sending, fading;
    // Start is called before the first frame update
    void Start()
    {
        sending = false;    
        fading = false;
        accTime = 0;
        fadeDuration = 0.5f;
    }

    public void sendMessage(string message)
    {
        resetMessage();
        popupText.GetComponent<TextMeshProUGUI>().text = message;
        sending = true;
    }
    public void resetMessage()
    {
        sending = false;
        accTime = 0;
        fading = false;
        popupText.GetComponent<TextMeshProUGUI>().text = "";
        popupText.GetComponent<TextMeshProUGUI>().CrossFadeAlpha(1, 0, false);
    }
    // Update is called once per frame
    void Update()
    {
        if (sending)
        {
            if (!fading)
            {
                accTime += Time.deltaTime;
                if (accTime > duration)
                {
                    popupText.GetComponent<TextMeshProUGUI>().CrossFadeAlpha(0, fadeDuration, false);
                    fading = true;
                    accTime = 0;
                }
            }
        }
    }
}
