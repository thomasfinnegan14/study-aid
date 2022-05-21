// Thomas Finnegan
// Quiz class implementation file

#include "Quiz.h"

// static score initialization
int Quiz::score = 0;

// Question Getter
std::string Quiz::getQuestion()
{
    return question;
}

// Answer Getter
std::string Quiz::getAnswer()
{
    return answer;
}

// Score Getter (static)
int Quiz::getScore()
{
    return score;
}

// updateScore function (static) that changes value of score
void Quiz::updateScore(int val)
{
    if (score == 0 && val == -1)
    {
        score = 0;
    }
    else 
    {
        score += val;
    }
}
