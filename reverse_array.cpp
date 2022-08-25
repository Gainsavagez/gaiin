/*Write a function that accepts an int array and
the array’s size as arguments. The function should create a c
py of the array, except that the element values should be reverse
d in the copy. The function should return a pointer to the new
array. Demonstrate the function in a complete program.*/
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
int *func(int[], const int);
void displayArray(const int[], const int);
int main()
{
    // define array
    int array[SIZE] = {1, 2, 3, 4, 5};

    // initailize pointer for the duplicate
    int *from_the_func = func(array, SIZE);

    cout << "Here is the original" << endl;
    displayArray(array, SIZE);
    cout << "Here is the copy" << endl;
    displayArray(from_the_func, SIZE);

    return 0;
}
int *func(int array[], const int size)
{
    int *copy_array = nullptr;
    copy_array = new int[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        copy_array[i] = array[i];
    }

    return copy_array;
}

void displayArray(const int array[], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << " " << endl;
    }
}