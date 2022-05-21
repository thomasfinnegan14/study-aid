# study-aid
C++ program that reads in questions and answers from text file and quizzes the user in the console

**How to run program**
- use makefile to initialize program
- type 'make run filename' where filename is the name of the text file (example file is database.txt)

**How to format the text file**
- Questions should be written with a 'Q: ' before them
- Answers should be written with a 'A: ' before them
- Reference the supplied database.txt file for example

**How the program works**
- Program randomly asks questions from file
- Program assumes user types answer exactly the same as it is written in the file (it has no input validation)
- If user gets answer correct, program prints 'Correct!'
- User's score is incremented by 1
- If user gets answer wrong, program prints correct answer and decrements user's score by 1
- User's score can never be less than 0
- Program ends when all questions have been asked
- Program will then print number of questions, number of correct answers, number of wrong answers, and the final score
