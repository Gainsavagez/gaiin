#include <iostream>
#include <string>
using namespace std;
int main()
{
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                               "Taylor, Terri", "Johnson, Jill",
                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                               "James, Jean", "Weaver, Jim", "Pore, Bob",
                               "Rutherford, Greg", "Javens, Renee",
                               "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth"};
    // Insert your code to complete this program
    int startScan, minIndex;
    string minValue;
    for (startScan = 0; startScan < (NUM_NAMES - 1); startScan++)
    {
        minIndex = startScan;
        minValue = names[startScan];
        for (int index = startScan + 1; index < NUM_NAMES; index++)
        {
            if (names[index] < minValue)
            {
                minValue = names[index];
                minIndex = index;
            }
        }
        names[minIndex] = names[startScan];
        names[startScan] = minValue;
    }
    for (int i = 0; i < 20; i++)
    {
        cout << names[i] << endl;
    }
    return 0;
}
