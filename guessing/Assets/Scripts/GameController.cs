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
    public GameObject winPanel;
    public GameObject losePanel;
    public GameObject answerPanel;
    public string currentAnimalType;
    private TMP_Text[] guessTexts;
    public TMP_Text moneyBar;
    private int money;
    private int guessedAnimals;
    private GameObject currentAnimal;
    public void StartGame()
    {
        SpawnAnimal();
        StartCameraMotion();
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
        for (int i = 0; i < guessTexts.Length; i++)
        {
            guessTexts[i].text = animals[Random.Range(0, animals.Count)].animalType;
            if (guessTexts[i].text==currentAnimalType)
            {
                tempbool = true;
            }
        }
        if (!tempbool)
        {
            guessTexts[1].text = currentAnimalType;
        }
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
            answerPanel.SetActive(false);
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
    }
    public void RestartGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
