/*The following function uses reference variables as parameters.
 Rewrite the function so it uses pointers instead of reference
 variables, then demonstrate the function in a complete program.
int doSomething(int &x, int &y)
{
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
} */
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int dosomething(int *, int *);
int main()
{
    int x = 10, y = 10;
    // int *ptr_x = &x;
    // int *ptr_y = &y;
    // cout << dosomething(ptr_x, ptr_y);
    cout << dosomething(&x, &y);
    return 0;
}
int dosomething(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}