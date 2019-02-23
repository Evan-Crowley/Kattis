/*
Evan Crowley
Kattis - Stuck in a Time Loop
https://open.kattis.com/problems/timeloop
*/
#include<iostream>
using namespace std;

int main()
{
    int i, j;
    cin >> i;
    for(j = 1; j <= i; j++)
    {
        cout << j << " Abracadabra" << endl;
    }
    return 0;
}