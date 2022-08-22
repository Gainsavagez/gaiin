/*Write a program that lets the user enter ten values into an array.
The program should then display the largest and smallest values stored in the array.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int nums[3] = {};
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter number bitches:::::   ";
        cin >> nums[i];
    }
    int large = nums[0], small = nums[0];
    for (int i = 1; i < 3; i++)
    {
        if (nums[i] > large)
        {
            large = nums[i];
        }
        if (nums[i] < small)
        {
            small = nums[i];
        }
    }
    cout << "The largest number is " << large << endl;
    cout << "The small number is " << small << endl;
    return 0;
}