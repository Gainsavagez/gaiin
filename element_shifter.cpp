/*Write a function that accepts an int array and the array’s size as arguments.
 The function should create a new array that is one element larger than
 the argument array. The first element of the new array should be set to
 0. Element 0 of the argument array should be copied to element 1 of the
 new array, element 1 of the argument array should be copied to element 2
 of the new array, and so forth. The function should return a pointer to the new array.*/
#include <iostream>
#include <string>
using namespace std;
int *func(int[], const int);
const int SIZE = 5;
int main()
{
    int array[SIZE] = {1, 2, 3, 4, 5};
    int *new_array = nullptr;
    new_array = func(array, SIZE);
    for (int i = 0; i < SIZE + 1; i++)
    {
        cout << new_array[i] << endl;
    }
    return 0;
}
int *func(int array[], const int SIZE)
{
    int *newarry_that_larger = nullptr;
    newarry_that_larger = new int[SIZE + 1];
    newarry_that_larger[0] = 0;
    for (int i = 1; i < SIZE + 1; i++)
    {
        newarry_that_larger[i] = array[i - 1];
    }
    return newarry_that_larger;
}