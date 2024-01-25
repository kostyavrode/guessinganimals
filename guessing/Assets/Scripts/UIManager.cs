using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    public static UIManager instance;
    [SerializeField] public GameObject[] elements;
    [SerializeField] private GameObject blackWindow;
    private void Awake()
    {
        instance = this;
    }
    public void CloseUI()
    {
        foreach (GameObject obj in elements)
        {
            obj.SetActive(false);
        }
        blackWindow.SetActive(true);

    }
    // Start is called before the first frame update
    void Start()
    {
        
    }
    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.K))
        {
            CloseUI();
        }
    }
}
