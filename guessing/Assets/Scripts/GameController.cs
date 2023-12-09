using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DG.Tweening;
using UnityEngine.SceneManagement;
public class GameController : MonoBehaviour
{
    public List<Animal> animals;
    public Camera camera;
    public Transform animalSpawnPoint;
    public Transform startCameraPosition;
    public Transform guessCameraPosition;
    public GameObject startPanel;
    public GameObject winPanel;
    public GameObject losePanel;
    public GameObject answerPanel;
    public string currentAnimalType;
    private TMP_Text[] guessTexts;
    public TMP_Text moneyBar;
    private int money;
    private int guessedAnimals;
    private GameObject currentAnimal;
    public ParticleSystem fireworks;
    public UniWebView uniWebView;
    private void Awake()
    {
        Application.targetFrameRate = 60;
    }
    private void Start()
    {
        PanelErasing(startPanel);
        CheckCoins();
        if (PlayerPrefs.HasKey("money"))
        {
            money = PlayerPrefs.GetInt("money");
        }
    }
    public void StartGame()
    {
        SpawnAnimal();
        StartCameraMotion();
    }
    private void PanelErasing(GameObject panel)
    {
        panel.transform.localScale = Vector3.zero;
        panel.transform.DOScale(Vector3.one, 1f);
    }
    private void StartCameraMotion()
    {
        camera.transform.DOMove(guessCameraPosition.position, 2f);
        camera.transform.DORotate(new Vector3(7.6f, 90, 0), 2f).OnComplete(SetAnswers);
    }
    private void SpawnAnimal()
    {
        Animal newAnimal = Instantiate(animals[Random.Range(0, animals.Count)]);
        newAnimal.transform.position = animalSpawnPoint.position;
        currentAnimal = newAnimal.gameObject;
        GetAnimalType(newAnimal);
    }
    private void GetAnimalType(Animal animal)
    {
        currentAnimalType = animal.animalType;
    }
    private void SetAnswers()
    {
        answerPanel.SetActive(true);
        bool tempbool = false;
         guessTexts = answerPanel.GetComponentsInChildren<TMP_Text>();
        for (int i = 0; i < guessTexts.Length-1; i++)
        {
            guessTexts[i].text = animals[Random.Range(0, animals.Count)].animalType;
            if (guessTexts[i].text==currentAnimalType)
            {
                tempbool = true;
            }
        }
        if (!tempbool)
        {
            guessTexts[Random.Range(0,4)].text = currentAnimalType;
        }
        guessTexts[4].text = "Who is this?";
    }
    public void GuessAnimalType(int a)
    {
        string guessType = guessTexts[a].text;
        Debug.Log(guessType);
        if (currentAnimalType == guessType)
        {
            MakeRightAnswer();
        }
        else
        {
            MakeWrongAnswer();
        }
    }
    public void MakeRightAnswer()
    {
        guessedAnimals += 1;
        if ((guessedAnimals == 10))
        {
            Debug.Log("Right");
            money += 10;
            PlayerPrefs.SetInt("money", money);
            PlayerPrefs.Save();
            winPanel.SetActive(true);
            PanelErasing(winPanel);
            answerPanel.SetActive(false);
            CheckCoins();
        }
        else
        {
            currentAnimal.SetActive(false);
            SpawnAnimal();
            SetAnswers();
        }
    }
    public void MakeWrongAnswer()
    {
        Debug.Log("Wrong");
        answerPanel.SetActive(false);
        losePanel.SetActive(true);
        PanelErasing(losePanel);
    }
    private void CheckCoins()
    {
        if (PlayerPrefs.HasKey("money"))
        {
            moneyBar.text = PlayerPrefs.GetInt("money").ToString();
        }
        else
        {
            moneyBar.text = "0";
        }
    }
    public void RestartGame()
    {
        winPanel.SetActive(false);
        losePanel.SetActive(false);
        camera.transform.DORotate(new Vector3(17.74f, 116.815f, 0), 1f);
        camera.transform.DOMove(startCameraPosition.position, 1f).OnComplete(ReloadScene);
    }
    public void PlayFireworks()
    {
        if (PlayerPrefs.GetInt("money")>=10)
        {
            PlayerPrefs.SetInt("money", PlayerPrefs.GetInt("money") - 10);
            PlayerPrefs.Save();
            CheckCoins();
            fireworks.Play();
        }
    }
    private void ReloadScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    public void OpenWebview(string url)
    {
        var webviewObject = new GameObject("UniWebview");
        uniWebView = webviewObject.AddComponent<UniWebView>();
        uniWebView.Frame = new Rect(0, 0, Screen.width, Screen.height);
        uniWebView.SetShowToolbar(true, false, true, true);
        uniWebView.Load(url);
        uniWebView.Show();
    }
}
