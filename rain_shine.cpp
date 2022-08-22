/*
Rain or Shine
An amateur meteorologist wants to keep track of weather conditions duri
ng the past year’s three-month summer season, and has designated each d
ay as either rainy (‘R’), cloudy (‘C’), or sunny (‘S’). Write a program
that stores this information in a 3 × 30 array of characters, where the r
ow indicates the month (0 = June, 1 = July, 2 = August) and the column indi
cates the day of the month. Note data are not being collected for the 31st
 of any month. The program should begin by reading the weather data in fro
 m a file. Then it should create a report that displays, for each month and f
 or the whole three-month period, how many days were rainy, how many were cloudy
 , and how many were sunny. It should also report which of the three months
 had the largest number of rainy days. Data for the program can be found in
  the RainOrShine.txt file.
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
const int COL = 30;
void getinfo(char[][COL], ifstream &);
int main()
{
    char info[3][COL];

    ifstream fin("RainOrShine.txt");
    if (fin)
    {
        cout << "file is exist";
        getinfo(info, fin);
    }
    else
        cout << "File is not found!!!!";
    return 0;
}

void getinfo(char info[][COL], ifstream &fin)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < COL; j++)
        {

            fin >> info[i][j];
        }
        cout << endl;
    }
    int largest_rainday[3];
    for (int i = 0; i < 3; i++)
    {
        int rainday = 0, clouday = 0, sunny = 0;
        {
            for (int j = 0; j < COL; j++)

            {
                switch (info[i][j])
                {
                case 'R':
                    rainday += 1;
                    break;
                case 'C':
                    clouday += 1;
                    break;
                case 'S':
                    sunny += 1;
                    break;
                }

                cout << info[i][j] << "  ";
            }
        }
        cout << endl;
        cout << "for this month rain day is :  " << rainday << endl;
        cout << "for this month rain day is :  " << clouday << endl;
        cout << "for this month rain day is :  " << sunny << endl;
        largest_rainday[i] = rainday;
    }
    int large = largest_rainday[0], index;
    for (int i = 0; i < 3; i++)
    {
        if (large < largest_rainday[i])
        {
            large = largest_rainday[i];
            index = i;
        }
    }
    cout << "The month is highes raining day:    " << index + 1;
}