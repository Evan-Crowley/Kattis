/*
Evan Crowley
Kattis - R2
https://open.kattis.com/problems/r2
*/
#include<iostream>

using namespace std;

int main()
{
    int s, r1, r2;
    cin >> r1 >> s;
    r2 = (s * 2) - r1;
    cout << r2;
    return 0;
}