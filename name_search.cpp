/*Name Search
For this programming problem, download the following
files from the book’s companion website:
• GirlNames.txt—This file contains a list of the 200
most popular names given to girls born in the United
States from 2000 to 2009.
• BoyNames.txt—This file contains a list of the 200 most
popular names given to boys born in the United States from 2000 to 2009.
Write a program that reads the contents of the two files
into two separate arrays or vectors. The user should be
able to enter a boy’s name, a girl’s name, or both, and
the application should display messages indicating whether
the names were among the most popular.*/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ifstream fin("GirlNames.txt"), fin2("BoyNames.txt");
    string girl_name[200];
    string boy_name[200];
    for (int i = 0; i < 200; i++)
    {
        fin >> girl_name[i];
        fin2 >> boy_name[i];
    }
    string name = " ";
    while (name != "x")
    {
        cout << "Enter the name:  ";
        cin >> name;
        for (int i = 0; i < 200; i++)
        {
            if (name == girl_name[i] || name == boy_name[i])
            {
                cout << "Yes this name is popular" << endl;
            }
        }
    }
    return 0;
}