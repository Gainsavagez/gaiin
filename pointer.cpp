/*Write a function that dynamically allocates an array of integers.
 The function should accept an integer argument indicating the number
 of elements to allocate. The function should return a pointer to the array.*/
#include <iostream>
#include <string>
using namespace std;
int *return_ptr(int);
void deleteptr(int *);
int main()
{

    int size;
    cout << "what size?:   ";
    cin >> size;
    int *ptr_int = return_ptr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> ptr_int[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << ptr_int[i] << "  ";
    }
    cout << "Before delete";
    deleteptr(ptr_int);
    cout << "After delete";
    for (int i = 0; i < size; i++)
    {
        cout << ptr_int[i] << "  ";
    }
    return 0;
}

int *return_ptr(int size)
{
    return new int[size];
}
void deleteptr(int *ptr_int)
{
    delete[] ptr_int;
    *ptr_int = 0;
}