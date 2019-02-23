/*
Evan Crowley
Kattis - Okvir
https://open.kattis.com/problems/okvir
*/
#include <assert.h>
#include <iostream>
#include <istream>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    // declare variables
    int M, N, U, L, R, D, i;
    cin >> M;
    cin >> N;
    cin >> U;
    cin >> L;
    cin >> R;
    cin >> D;

    vector<vector<char>> board; // create multidimensional vector to be chessboard pattern
    board.resize(M + U + D);    // resize height for buffers and words
    for (auto &row : board)
    {
        row.resize(N + L + R, '#'); // resize rows to fit words, left and right buffer
    }                               // then set every char to '#' on the board

    for (int i = 0; i < board.size(); i++)
    {
        for (int x = 0; x < board[i].size(); x++)
        {
            if ((i + x) % 2 == 1) // if not an even modulo, change to '.'
                board[i][x] = '.';
        }
    } // this makes it so the top left is always '#'

    vector<string> s; // create a vector of strings to hold the input
    for (int i = 0; i < M; i++)
    {
        string temp; // read in words to temporary string
        cin >> temp;
        s.push_back(temp); // push on to s, have all words as accesible elements
    }

    for (int i = 0; i < M; i++)
    {
        for (int x = 0; x < N; x++)
        {
            board[i + U][x + L] = s[i][x]; // place the words in their frame
        }                                  // start after upper buffer, and after left buffer, then replace
    }

    for (int i = 0; i < board.size(); i++)
    {
        for (int x = 0; x < board[i].size(); x++)
        {
            cout << board[i][x]; // print finished frame
        }
        cout << endl;
    }
}