/* Write a program that dynamically allocates an array large
 enough to hold a userdefined number of test scores. Once all
 the scores are entered, the array should be passed to a func
 tion that sorts them in ascending order. Another function sho
 uld be called that calculates the average score. The program
  should display the sorted list of scores and averages with ap
  propriate headings. Use pointer notation rather than array
  notation whenever possible.
Input Validation: Do not accept negative numbers for test scores.
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void sortit(int *, string *);
float findavg(int *);
template <typename T>
void swaps(T &, T &);
int main()
{
    ifstream fin("C:/Users/amullane/OneDrive - Passaic County Community College/Test/Chapter9_2/name_test.txt");
    int score_array[10];

    int *ptr_of_score = score_array;
    string *ptr_of_name = new string[10];

    string name[10];
    int score[10];
    while (!fin.eof())
    {
        for (int i = 0; i < 10; i++)
        {
            fin >> ptr_of_name[i] >> ptr_of_score[i];
            cout << ptr_of_name[i] << ptr_of_score[i] << endl;
        }
    }

    sortit(ptr_of_score, ptr_of_name);
    cout << " the avg is :  " << findavg(ptr_of_score);
    return 0;
}
void sortit(int *ptr_of_score, string *ptr_of_name)
{
    cout << "it's working so far";
    int startScan, minIndex, minValue;
    for (startScan = 0; startScan < 10 - 1; startScan++)
    {
        minIndex = startScan;
        minValue = ptr_of_score[startScan];
        for (int index = startScan + 1; index < 10; index++)
        {
            if (ptr_of_score[index] < minValue)
            {
                minIndex = index;
                minValue = ptr_of_score[index];
            }
        }
        swaps(ptr_of_score[minIndex], ptr_of_score[startScan]);
        swaps(ptr_of_name[minIndex], ptr_of_name[startScan]);
        ptr_of_score[startScan] = minValue;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << ptr_of_name[i] << "  " << ptr_of_score[i] << endl;
    }
}
float findavg(int *ptr_of_score)
{
    float total = 0.0;
    for (int i = 1; i < 10; i++)
    {
        total += ptr_of_score[i];
    }
    return total / 10;
}

template <typename T>
void swaps(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}