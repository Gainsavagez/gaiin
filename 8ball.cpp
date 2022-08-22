/*Write a program that simulates a Magic 8 Ball,
which is a fortune-telling toy that displays a random
 response to a yes or no question. On the book’s com
 panion website you will find a text file named 8_bal
 l_responses.txt. The file contains 12 responses, suc
 h as “I don’t think so”, “Yes, of course!”, “I’m not
  sure”, and so forth. The program should read the res
  ponses from the file into an array or vector. It shoul
   prompt the user to ask a question, and then display on
   e of the responses, randomly selected from the array o
   r vector. The program should repeat until the user is r
   eady to quit.
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
    string ball_answer[12];
    // Providing a seed value
    srand((unsigned)time(NULL));
    // Retrieve a random number between 99 and 999
    //  Offset = 99
    //  Range = 900

    ifstream fin("8_ball_responses.txt");
    if (fin)
    {
        //  cout << "File is here!";
        while (!fin.eof())
        {
            for (int i = 0; i < 12; i++)
            {
                getline(fin, ball_answer[i]);
            }
        }
        string ask;
        while (ask != "x")
        {

            int random_num = 0 + (rand() % 11);
            cout << "Ask ::::::  ";
            getline(cin, ask);
            cout << ball_answer[random_num] << endl; // system("cls");
        }
    }
    else
        cout << "file is not here!!!";

    return 0;
}