/*Exam Grader
One of your professors has asked you to write a program to
grade her final exams, which consist of only 20 multiple-ch
oice questions. Each question has one of four possible answe
rs: A, B, C, or D. The file CorrectAnswers.txt (that you can d
ownload from the book’s companion website) contains the correct
 answers for all of the questions, with each answer written on
 a separate line. The first line contains the answer to the firs
 t question, the second line contains the answer to the second q
 uestion, and so forth.
Write a program that reads the contents of the CorrectAnswers.tx
t file into a char array, then reads the contents of another fil
e, containing a student’s answers, into a second char array. (You
can download the file StudentAnswers.txt from the book’s companion
website and use it for testing purposes.) The program should determ
ine the number of questions that the student missed, then display the following:
• A list of the questions missed by the student, showing the cor
rect answer and the incorrect answer provided by the student for each missed question
• The total number of questions missed
• The percentage of questions answered correctly. This can be calculated as
Correctly Answered Questions ÷ Total Number of Questions
• If the percentage of correctly answered questions is 70 percent or
greater, the program should indicate that the student passed the exam.
 Otherwise, it should indicate that the student failed the exam.
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
float findpercent(float);
int main()
{
    char correct_answer[20], student_answer[20];
    float percent;
    ifstream fin("CorrectAnswers.txt");
    ifstream fin2("StudentAnswers.txt");
    if (fin)
    {
        cout << "file is here!";
        //  system("cls");
        cout << "The screen has been cleared!!!";
        float total_miss;
        for (int i = 0; i < 20; i++)
        {
            fin >> correct_answer[i];
            fin2 >> student_answer[i];
            if (correct_answer[i] != student_answer[i])
            {
                total_miss++;
                cout << total_miss << endl;
            }
        }
        percent = findpercent(total_miss);
        cout << percent * 100 << "%";
    }
    else
        cout << "file is not here!";

    return 0;
}

float findpercent(float total_miss)
{
    return (20 - total_miss) / 20;
}