#include <bits/stdc++.h>

using namespace std;

void printarr(char arr[], int size)
{
    int a = 0;
    for (int i = 0; i < (size / 3); i++)
    {
        cout << "|";
        for (int j = 0; j < (size / 3); j++)
        {
            cout << " " << arr[a] << " "
                 << "|";
            a++;
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int count = 9;
    char arr[9] = {'_', '_', '_', '_', '_', '_', '_', '_', '_'};
    bool flag = 1;
    cout << endl;
    cout << "TIC TAC TOE" << endl;
    cout << endl;
    cout << "Start" << endl;
    cout << endl;
    cout << "Enter PLAYER 1 NAME" << endl;
    string player_1;
    cin >> player_1;
    cout << "Enter PLAYER 2 NAME" << endl;
    string player_2;
    cin >> player_2;
    printarr(arr, 9);
    while (count != 0)
    {
        int row = 1;
        int col = 1;

        if (flag == 1)
        {
            cout << player_1 << " TURN" << endl;
            cout << "Choose row" << endl;
            cin >> row;
            if (row > 3)
            {
                cout << "Invalid row selection, please select a row from 1 to 3" << endl;
                continue;
            }
            cout << "Choose column" << endl;
            cin >> col;
            if (col > 3)
            {
                cout << "Invalid column selection, please select a row from 1 to 3" << endl;
                continue;
            }
            int diff = -1;
            if (row == 1)
            {
                diff = -2;
            }
            else if (row == 2)
            {
                diff = 0;
            }
            else if (row == 3)
            {
                diff = 2;
            }
            int pos = row + col + diff;
            if (arr[pos] == 'X' || arr[pos] == 'O')
            {
                cout << "Already filled cell, please choose another cell" << endl;
            }
            else
            {
                arr[pos] = 'X';
            }
            printarr(arr, 9);
            flag = 0;
            count--;
        }
        else
        {
            cout << player_2 << " TURN" << endl;
            cout << "Choose row" << endl;
            cin >> row;
            cout << "Choose column" << endl;
            if (row > 3)
            {
                cout << "Invalid row selection, please select a row from 1 to 3" << endl;
                continue;
            }
            cin >> col;
            if (col > 3)
            {
                cout << "Invalid column selection, please select a row from 1 to 3" << endl;
                continue;
            }
            int diff = -1;
            if (row == 1)
            {
                diff = -2;
            }
            else if (row == 2)
            {
                diff = 0;
            }
            else if (row == 3)
            {
                diff = 2;
            }
            int pos = row + col + diff;
            if (arr[pos] == 'X' || arr[pos] == 'O')
            {
                cout << "Already filled cell, please choose another cell" << endl;
            }
            else
            {
                arr[pos] = 'O';
            }
            printarr(arr, 9);
            flag = 1;
            count--;
        }

        // HORIZONTAL WINNING PATTERN

        if (arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X')
        {
            cout << "Winner : " << player_1 << endl;
            break;
        }

        if (arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'O')
        {
            cout << "Winner : " << player_2 << endl;
            break;
        }

        if (arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X')
        {
            cout << "Winner : " << player_1 << endl;
            break;
        }

        if (arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'O')
        {
            cout << "Winner : " << player_2 << endl;
            break;
        }

        if (arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X')
        {
            cout << "Winner : " << player_1 << endl;
            break;
        }

        if (arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'O')
        {
            cout << "Winner : " << player_2 << endl;
            break;
        }

        // VERTICAL WINNING PATTERN

        if (arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X')
        {
            cout << "Winner : " << player_1 << endl;
            break;
        }

        if (arr[0] == 'O' && arr[3] == 'O' && arr[6] == 'O')
        {
            cout << "Winner : " << player_2 << endl;
            break;
        }

        if (arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X')
        {
            cout << "Winner : " << player_1 << endl;
            break;
        }

        if (arr[1] == 'O' && arr[4] == 'O' && arr[7] == 'O')
        {
            cout << "Winner : " << player_2 << endl;
            break;
        }

        if (arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X')
        {
            cout << "Winner : " << player_1 << endl;
            break;
        }

        if (arr[2] == 'O' && arr[5] == 'O' && arr[8] == 'O')
        {
            cout << "Winner : " << player_2 << endl;
            break;
        }

        // DIAGONAL WINNING PATTERN

        if (arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X')
        {
            cout << "Winner : " << player_1 << endl;
            break;
        }

        if (arr[0] == 'O' && arr[4] == 'O' && arr[8] == 'O')
        {
            cout << "Winner : " << player_2 << endl;
            break;
        }

        if (arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X')
        {
            cout << "Winner : " << player_1 << endl;
            break;
        }

        if (arr[2] == 'O' && arr[4] == 'O' && arr[6] == 'O')
        {
            cout << "Winner : " << player_2 << endl;
            break;
        }
    }

    if (count == 0)
    {
        cout << "It's a tie!!!" << endl;
    }
}