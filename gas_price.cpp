/*
On the book’s companion website you will find  a  text  file  named
1994_Weekly_Gas_Averages.txt.  The  file  contains  the  average  gas
 price  for  each  week  in  the  year 1994 (There are 52 lines in the
 file. Line 1 contains the average price for week 1, line 2 contains th
 e average price for week 2, and so forth.) Write a program that reads the
  gas prices from the file into an array or a vector. The program should do the following:
• Display the lowest average price of the year, along with the week number f
or that price, and the name of the month in which it occurred.
• Display the highest average price of the year, along with the week number
for that price, and the name of the month in which it occurred.
• Display the average gas price for each month. (To get the average price for
 a given month, calculate the average of the average weekly prices for that month.)
*/
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
void setInfo(ifstream &, vector<int> &, vector<float> &);
void getInfo(vector<int>, vector<float>);
int findLowest(vector<float>);
float findavg(vector<float>);
int main()
{
    vector<int> year;
    vector<float> price;
    ifstream fin("gas_price.txt");
    if (fin)
    {
        setInfo(fin, year, price);
        getInfo(year, price);
    }
    else
        cout << "file is not here!!!";

    return 0;
}
void setInfo(ifstream &fin, vector<int> &year, vector<float> &price)
{
    while (!fin.eof())
    {
        float num;
        fin >> num;
        price.push_back(num);
    }
    for (int i = 1994; i < price.size() + 1994; i++)
    {
        year.push_back(i);
    }
}
void getInfo(vector<int> year, vector<float> price)
{
    int lowestnum = findLowest(price);

    cout << "The lowest price is " << year[lowestnum] << "  " << price[lowestnum];
    cout << "the avg is :   " << findavg(price);
}
int findLowest(vector<float> price)
{
    float lowest = price[0];
    int index = 0;
    for (int i = 0; i < price.size(); i++)
    {
        if (lowest > price[i])
        {
            lowest = price[i];
            index = i;
        }
    }
    return index;
}
float findavg(vector<float> price)
{
    float total = 0;
    for (int i = 0; i < price.size(); i++)
    {
        total += price[i];
    }
    return total / price.size();
}