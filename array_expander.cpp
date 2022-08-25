/*Write a function that accepts an int array and the array’s size as arguments.
 The function should create a new array that is twice the size of the argument
 array. The function should copy the contents of the argument array to the new
  array and initialize the unused elements of the second array with 0. The fu
  nction should return a pointer to the new array.*/
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 2;
int *func(int[], const int);
int main()
{ // creat array
    int array[SIZE];

    // creatr the ptr
    int *extend_array = nullptr;

    extend_array = func(array, SIZE);

    for (int i = 0; i < SIZE * 2; i++)
    {
        cin >> extend_array[i];
    }
    for (int i = 0; i < SIZE * 2; i++)
    {
        cout << extend_array[i] << endl;
    }
}

int *func(int array[], const int SIZE)
{
    int *extend_ptr = nullptr;
    extend_ptr = new int[SIZE * 2];
    return extend_ptr;
}
