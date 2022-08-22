/*Write a program that lets a maker of chips and salsa keep track
 of sales for five different types of salsa: mild, medium, sweet,
  hot, and zesty. The program should use two parallel 5-element arrays:
   an array of strings that holds the five salsa names, and
   an array of integers that holds the number of jars sold during
    the past month for each salsa type. The salsa names should be
     stored using an initialization list at the time the name arr
     ay is created. The program should prompt the user to enter t
     he number of jars sold for each type. Once this sales data ha
     s been entered, the program should produce a report that disp
     lays sales for each salsa type, total sales, and the names of
     the highest selling and lowest selling products.
Input Validation: Do not accept negative values for number of jars sold.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name[5] = {"mild", "medium", "sweet", "hot", "zesty"};
    int number[5];
    for (int i = 0; i < 5; i++)
    {
        cout << name[i] << " sold :   ";
        cin >> number[i];
        while (number[i] < 0)
        {
            cout << name[i] << " sold :   ";
            cin >> number[i];
        }
    }
    int large = number[0], small = number[0], small_index = 0, large_index = 0;
    for (int i = 1; i < 5; i++)
    {
        if (large < number[i])
        {
            large = number[i];
            large_index = i;
        }
        if (small > number[i])
        {
            small = number[i];
            small_index = i;
        }
    }
    cout << "the largest is   :" << name[large_index] << endl;
    cout << "the smallest is   :" << name[small_index] << endl;
    return 0;
}