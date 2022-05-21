// Thomas Finnegan

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include "printResult.h"
#include "Quiz.h"

using namespace std;

int main(int argc, char const *argv[])
{
    // variables to hold question, answer, and "Q:" or "A:"
    string question;
    string answer;
    string temp;
    string qa;
    string bab;
    string userInput;
    int questions = 0;
    int correct = 0;
    int wrong = 0;

    // vector for storing objects of Quiz
    vector<Quiz> quizVector;

    // open file to read in from
    ifstream database ("database.txt");

    // check if file is open
    if (database.is_open())
    {
        while (getline(database, temp))
        {
            // assign question to temp and erase Q:
            question = temp;
            question.erase(0,3);

            // assign answer to temp and erase A:
            getline(database, temp);
            answer = temp;
            answer.erase(0,3);

            //check if there is an endline character '\r'
            if (answer[answer.length()-1] == '\r')
            {
                answer.erase(answer.length()-1);
            }

            quizVector.push_back(Quiz(question, answer));
        }

    }

    // randomize the time and shuffle vector objects
    srand(unsigned(time(0)));
    random_shuffle(quizVector.begin(), quizVector.end());

    // for loop to call all vector objects
    for (unsigned int i = 0; i < quizVector.size(); ++i)
    {

        // collect user answer
        cout << quizVector[i].getQuestion() << endl;
        cout << "Type in your answer: ";
        cin >> ws;
        getline(cin, userInput);

        // check if user answer is correct and adjust variables accordingly
        if (userInput == quizVector[i].getAnswer())
        {
            cout << "Correct!" << endl;
            questions += 1;
            correct += 1;
            quizVector[i].updateScore(1);
        }
        else
        {
            cout << "Wrong! Correct answer: " << quizVector[i].getAnswer() << endl;
            questions += 1;
            wrong += 1;
            quizVector[i].updateScore(-1);
        }

        // display current score
        cout << "Current score: " << quizVector[i].getScore() << endl;
    }

    // call printResult and print end answers
    cout << printResult(questions, correct, wrong);


    // close file
    database.close();

    return 0;
}