/*Driver’s License Exam
The  local  Driver’s  License  Office  has  asked  you  
to  write  a  program  that  grades  the  written  porti
on  of  the  driver’s  license  exam.  The  exam  has  20
  multiple-choice  questions. Here are the correct answers:
1.  A	6. B	11.  A	16.  C
2.  D	7. A	12.  C	17.  C
3.  B	8. B	13.  D	18.  A
4.  B	9. C	14.  B	19.  D
5.  C	10. D	15.  D	20.  B
Your program should store the correct answers shown above
 in an array. It should ask the user to enter the student’
 s answers for each of the 20 questions, and the answers
 should be stored in another array. After the student’s an
 swers have been entered, the program should display a mes
 sage indicating whether the student passed or failed the
 exam. (A student must correctly answer 15 of the 20 quest
 ions to pass the exam.) It should then display the total n
 umber of correctly answered questions, the total number of i
 ncorrectly answered questions, and a list showing the questio
 n numbers of the incorrectly answered questions.
Input Validation: Only accept the letters A, B, C, or D as answers.
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char correct_answer[20] = {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'};
    char student_answer[20];
    int score = 0;
    for (int i = 0; i < 20; i++)
    {
        cout << " enter:   ";
        while (toupper(student_answer[i]) != 'A' && toupper(student_answer[i]) != 'B')
        {
            cin >> student_answer[i];
        }
        if (toupper(student_answer[i]) == correct_answer[i])
            score++;
    }
    cout << score;
    return 0;
}