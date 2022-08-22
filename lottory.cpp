/*Write a program that simulates a lottery.
The program should have an array of five integers named
lottery and should generate a random number in the range
of 0 through 9 for each element in the array. The user sho
uld enter five digits, which should be stored in an integer
 array named user. The program is to compare the correspond
 ing elements in the two arrays and keep a count of the dig
 its that match. For example, the following shows the lotte
 ry array and the user array with sample numbers stored in e
 ach. There are two matching digits (elements 2 and 4).
Lottery array:
7	4	9	1	3
User array:
4	2	9	7	3
The program should display the random numbers stored in the
 lottery array and the number of matching digits. If all of t
 he digits match, display a message proclaiming the user as a
  grand prize winner.*/
#include <iostream>
#include <string>
#include <random>
using namespace std;
int main()
{
  int lottery[5];
  for (int i = 0; i < 5; i++)
  {
    random_device random_number;
    uniform_int_distribution<int> randomNumber(0, 9);
    lottery[i] = (randomNumber(random_number));
    cout << lottery[i];
  }
  cout << endl;
  int user_lottery[5];

  for (int i = 0; i < 5; i++)
  {
    cout << "Enter you number:   ";
    cin >> user_lottery[i];
    if (user_lottery[i] == lottery[i])
      cout << "your won index  " << i << endl;
  }
  cout << user_lottery[0] << user_lottery[1] << user_lottery[2] << user_lottery[3] << user_lottery[4] << endl;
  cout << lottery[0] << lottery[1] << lottery[2] << lottery[3] << lottery[4];

  return 0;
}
