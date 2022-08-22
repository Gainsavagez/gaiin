/*Monkey Business
A local zoo wants to keep track of how many pounds of food each of
its three monkeys eats each day during a typical week. Write a program
 that stores this information in a two-dimensional 3 × 5 array, wher
  each row represents a different monkey, and each column represents
   a different day of the week. The program should first have the
   user input the data for each monkey. Then, it should create a
   eport that includes the following information:
• Average amount of food eaten per day by the whole family of monkeys.
• The least amount of food eaten during the week by any one monkey.
• The greatest amount of food eaten during the week by any one monkey.
Input Validation: Do not accept negative numbers for pounds of food eaten.*/
#include <iostream>
#include <string>
using namespace std;
const int COL = 5;
void average_per_day(const int[][COL]);
int main()
{
    int two_di[3][COL] = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3};

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the food for Monkey " << i + 1 << endl;
        for (int j = 0; j < 5; j++)
        {
            string day[5] = {"Monday", "Tue", "Wed", "Thus", "Fri"};
            cout << "On " << day[j] << ":    ";
            cin >> two_di[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        {
            for (int j = 0; j < 5; j++)

                cout << two_di[i][j] << "  ";
        }
        cout << endl;
    }
    average_per_day(two_di);
    return 0;
}

void average_per_day(const int two_di[][COL])
{

    string day[5] = {"Monday", "Tue", "Wed", "Thus", "Fri"};
    int large = two_di[0][0], small = two_di[0][0], large_index, small_index;
    for (int j = 0; j < COL; j++)
    {
        float total_perday = 0;
        for (int i = 0; i < 3; i++)
        {
            total_perday += two_di[i][j];
            if (large < two_di[i][j])
            {
                large = two_di[i][j];
                large_index = i;
            }
            if (small > two_di[i][j])
            {
                small = two_di[i][j];
                small_index = i;
            }
        }
        cout << "Total on " << day[j] << " :  " << total_perday << endl;
    }
    cout << "Small least =  " << small << " from Monkey number #" << small_index + 1 << endl;
    cout << "Largest is =  " << large << " from Monkey number #" << large_index + 1 << endl;
}