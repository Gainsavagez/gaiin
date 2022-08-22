/*In a program, write a function that accepts three argument
s: an array, the size of the array, and a number n. Assum
e the array contains integers. The function should displa
y all of the numbers in the array that are greater than th
e number n.
*/
#include <iostream>
#include <string>
using namespace std;
void bigger_than(int[], int, int);
int main()
{
    const int size = 10;
    int n = 9;
    int array[size] = {10, 20, 36, 45, 12, 11, 56, 58, 69, 21};
    bigger_than(array, size, n);
    return 0;
}

void bigger_than(int array[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] > n)
            cout << array[i] << "   ";
    }
}