// Thomas Finnegan
// Quiz class declaration file

#ifndef QUIZ_H_
#define QUIZ_H_

#include <string>
#include <iostream>
#include <iomanip>

class Quiz
{
    private:
        // private member variables
        std::string question = ""; 
        std::string answer = "";
        static int score;

    public:
        // default constructor
        Quiz() = default;

        // constructor to allow creation of Quiz object with 
        // question and answer passed as arguments
        Quiz(std::string q, std::string a): question(q), answer(a) {}

        // getters
        std::string getQuestion();
        std::string getAnswer();
        static int getScore();
        
        // updateScore function changes value of score by passing number as val
        static void updateScore(int val);

        // friend function to access score
        friend std::string printResult(int questions, int correct, int wrong);






};




#endif