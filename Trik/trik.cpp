/*
Evan Crowley
Kattis - Trik
https://open.kattis.com/problems/trik
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string moves;
    getline(cin, moves);
    int position = 1, i = 0;
    while (i < moves.length())
    {
        if (moves[i] == 'A')
        {
            i++;
            if (position == 1) position = 2;
            else if (position == 2) position = 1;
        }
        if (moves[i] == 'B')
        {
            i++;
            if (position == 2) position = 3;
            else if (position == 3) position = 2;
        }
        if (moves[i] == 'C')
        {
            i++;
            if (position == 1) position = 3;
            else if (position == 3) position = 1;
        }
    }
    cout << position << endl;
    system("pause");
    return 0;
}