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
using namespace std;
void sortit(int *);
float findavg(int *);
int main()
{
    int score_array[10];
    int *ptr_of_score = score_array;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter: ";
        cin >> ptr_of_score[i];
    }
    sortit(ptr_of_score);
    cout << " the avg is :  " << findavg(ptr_of_score);
    return 0;
}
void sortit(int *ptr_of_score)
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
        ptr_of_score[minIndex] = ptr_of_score[startScan];
        ptr_of_score[startScan] = minValue;
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << ptr_of_score[i] << "  ";
    // }
}
float findavg(int *ptr_of_score)
{
    float total = 0.0;
    for (int i = 0; i < 10; i++)
    {
        total += ptr_of_score[i];
    }
    return total / 10;
}
