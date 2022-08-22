/*World Series Champions
For this programming problem, download the following
files from the book’s companion website:
• Teams.txt—This file contains a list of several Major
League baseball teams in alphabetical order. Each team lis
ted in the file has won the World Series at least once.
• WorldSeriesWinners.txt—This file contains a chronologica
l list of the World Series’ winning teams from 1903 to 2012.
 (The first line in the file is the name of the team that won
  in 1903, and the last line is the name of the team that won i
  n 2012. Note the World Series was not played in 1904 or 1994.)
Write a program that displays the contents of the Teams.txt file
 on the screen and prompts the user to enter the name of one of t
 he teams. The program should then display the number of times
  that team has won the World Series in the time period from 1903 to 2012.
TIP: Read the contents of the WorldSeriesWinners.txt file into an
 array or vector. When the user enters the name of a team, the progr
 am should step through the array or vector counting the number of t
 imes the selected team appears.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
void getinfo(ifstream &, ifstream &, vector<string> &, vector<string> &);
int find_name(vector<string>, vector<string>);
int main()
{
    vector<string> team_name;
    vector<string> winning_list;
    // ifstream fin("C:/Users/amullane/OneDrive - Passaic County Community College/Test/chapter7/Teams.txt"), fin2("C:/Users/amullane/OneDrive - Passaic County Community College/Test/chapter7/WorldSeriesWinners.txt");
    ifstream fin("Teams.txt"), fin2("WorldSeriesWinners.txt");

    if (fin && fin2)
    {
        cout << "file is here\n";
        getinfo(fin, fin2, team_name, winning_list);
        cout << find_name(team_name, winning_list);
    }
    else
        cout << " file is not here!";
    return 0;
}

void getinfo(ifstream &fin, ifstream &fin2, vector<string> &team_name, vector<string> &winning_list)
{
    string team, winning;

    while (!fin.eof())
    {
        getline(fin, team);
        team_name.push_back(team);
    }
    while (!fin2.eof())
    {
        getline(fin2, winning);
        ;
        winning_list.push_back(winning);
    }
}
int find_name(vector<string> team_name, vector<string> winning_list)
{
    string name;
    int count = 0, res;
    cout << "Enter the name that you want to find :   ";
    getline(cin, name);
    for (int i = 0; i < winning_list.size(); i++)
    {
        // res = winning_list[i].compare(name);
        // if (res == 0)
        //     count++;
        if (winning_list[i] == name)
            count++;
    }
    return count;
}