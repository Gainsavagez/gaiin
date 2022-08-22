/*A teacher has five students who have taken four tests.
The teacher uses the following grading scale to assign a
letter grade to a student, based on the average of his or
her four test scores:
Test Score	Letter Grade
90–100	A
80–89	B
70–79	C
60–69	D
0–59	F
Write a program that uses an array of string objects to
hold the five student names, an array of five characters
 to hold the five students’ letter grades, and five array
 s of four doubles to hold each student’s set of test scores.
The program should allow the user to enter each student’
s name and his or her four test scores. It should then ca
lculate and display each student’s average test score, and
a letter grade based on the average.
Input Validation: Do not accept test scores less than 0 or greater than 100.


*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
const int COL = 4;
void setinfo(string[], char[], double[][COL], ifstream &);
void getinfo(string[], char[]);
int main()
{
    string name[5];
    char grade[5];
    double score[5][4];
    ifstream fin("grade.txt");
    if (fin)
    {
        cout << "File is here!";
        setinfo(name, grade, score, fin);
        getinfo(name, grade);
    }
    else
        cout << "file is not here!!!";

    return 0;
}
void setinfo(string name[], char grade[], double score[][COL], ifstream &fin)
{

    for (int i = 0; i < 5; i++)
    {
        float total_score = 0, avg = 0;
        fin >> name[i];
        for (int j = 0; j < COL; j++)
        {
            fin >> score[i][j];
            total_score += score[i][j];
        }
        avg = (total_score / 4);
        if (avg >= 90)
            grade[i] = 'A';
        else if (avg >= 80)
            grade[i] = 'B';
        else if (avg >= 70)
            grade[i] = 'C';
        else if (avg >= 60)
            grade[i] = 'D';
        else
            grade[i] = 'F';
    }
}
void getinfo(string name[], char grade[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << name[i] << "  " << grade[i] << endl;
    }
}