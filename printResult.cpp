// Thomas Finnegan

#include "printResult.h"
#include "Quiz.h"

// function declaration
std::string printResult(int questions, int correct, int wrong)
{  
    // declare stringstream
    std::stringstream ss;

    // assigning each variable to stringstream
    ss << "Number of questions: " << questions << std::endl;
    ss << "Number correct answers: " << correct << std::endl;
    ss << "Number wrong answers: " << wrong << std::endl;
    ss << "Final score: " << Quiz::getScore() << std::endl;

    //return stringstream as a string
    return ss.str();

}