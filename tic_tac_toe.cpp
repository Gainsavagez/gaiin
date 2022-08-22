/*Tic-Tac-Toe Game
Write a program that allows two players to play a
game of tic-tac-toe. Use a two-dimensional char array
 with three rows and three columns as the game board.
 Each element of the array should be initialized with
 an asterisk (*). The program should run a loop that d
 oes the following:
• Displays the contents of the board array.
• Allows player 1 to select a location on the board for
 an X. The program should ask the user to enter the row
 and column numbers.
• Allows player 2 to select a location on the board for
an O. The program should ask the user to enter the row an
d column numbers.
• Determines whether a player has won, or a tie has occurred.
 If a player has won, the program should declare that player the
  winner and end. If a tie has occurred, the program should
  display an appropriate message and end.
Player 1 wins when there are three Xs in a row on the game
board. The Xs can appear in a row, in a column, or diagonally
 across the board. Player 2 wins when there are three Os in a
 row on the game board. The Os can appear in a row, in a column,
  or diagonally across the board. A tie occurs when all of the
   locations on the board are full, but there is no winner.
*/
#include <iostream>
#include <string>
using namespace std;
const int COL = 3;
void Table(const char[][COL]);
void player1(char[][COL]);
void player2(char[][COL]);
bool check_winner(const char[][COL]);
int main()
{
    char table[3][COL] = {'*', '*', '*', '*', '*', '*', '*', '*', '*'};
    Table(table);
    for (int i = 0; i < 9; i++)
    {

        if (i % 2 == 0)
            player1(table);
        else
            player2(table);
        Table(table);
        if (check_winner(table))
        {
            break;
        }
    }

    return 0;
}
void player1(char table[3][COL])
{
    int rol_num, col_num;
    cout << "Player 1  Enter the position:  ";
    cin >> rol_num >> col_num;
    if (table[rol_num][col_num] == 'X' || table[rol_num][col_num] == 'O')
        return player1(table);
    else
        table[rol_num][col_num] = 'X';
}

void player2(char table[3][COL])
{
    int rol_num, col_num;
    cout << "Player 2  Enter the position:  ";
    cin >> rol_num >> col_num;
    if (table[rol_num][col_num] == 'X' || table[rol_num][col_num] == 'O')
        return player2(table);
    else
        table[rol_num][col_num] = 'O';
}

void Table(const char table[3][COL])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " |  " << table[i][j];
            if (j == 2)
                cout << " |  " << endl;
        }
    }
}
bool check_winner(const char table[3][COL])
{
    string text;
    if (table[0][0] == 'X' && table[0][1] == 'X' && table[0][2] == 'X' ||
        table[0][0] == 'O' && table[0][1] == 'O' && table[0][2] == 'O' ||
        table[1][0] == 'X' && table[1][1] == 'X' && table[1][2] == 'X' ||
        table[1][0] == 'O' && table[1][1] == 'O' && table[1][2] == 'O' ||
        table[2][0] == 'X' && table[2][1] == 'X' && table[2][2] == 'X' ||
        table[2][0] == 'O' && table[2][1] == 'O' && table[2][2] == 'O' ||
        table[0][0] == 'X' && table[1][1] == 'X' && table[2][2] == 'X' ||
        table[0][0] == 'O' && table[1][1] == 'O' && table[2][2] == 'O' ||
        table[2][0] == 'X' && table[1][1] == 'X' && table[0][2] == 'X' ||
        table[2][0] == 'O' && table[1][1] == 'O' && table[0][2] == 'O' ||
        table[0][1] == 'X' && table[1][1] == 'X' && table[2][1] == 'X' ||
        table[0][1] == 'O' && table[1][1] == 'O' && table[2][1] == 'O' ||
        table[0][0] == 'X' && table[1][0] == 'X' && table[2][0] == 'X' ||
        table[0][0] == 'O' && table[1][0] == 'O' && table[2][0] == 'O' ||
        table[0][2] == 'X' && table[1][2] == 'X' && table[2][2] == 'X' ||
        table[0][2] == 'O' && table[1][2] == 'O' && table[2][2] == 'O')
    {
        cout << " you are the winner";
        return true;
    }
    else
        return false;
}