/*Write a program that lets the user enter the total rainfall for each of
12 months into an array of doubles. The program should calculate and display
 the total rainfall for the year, the average monthly rainfall, and the
 months with the highest and lowest amounts.
Input Validation: Do not accept negative numbers for monthly rainfall figures.*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    double rainfall[12];
    for (int i = 0; i < 12; i++)
    {
        cout << "rain fall in month " << i + 1 << "  :";
        cin >> rainfall[i];
    }
    double large = 0, small = 0, total_rainfall = 0, average;
    for (int i = 0; i < 12; i++)
    {
        if (large < rainfall[i])
            large = rainfall[i];
        if (small > rainfall[i])
            small = rainfall[i];
        total_rainfall += rainfall[i];
    }
    cout << "total rainfall:   " << total_rainfall << endl;
    cout << "average:    " << (total_rainfall / 12) << endl;
    cout << "large:    " << large << endl;
    cout << "small:    " << small << endl;

    // for (int i = 0; i < 12; i++)
    // {
    //     cout << rainfall[i] << "  ";
    // }
    return 0;
}