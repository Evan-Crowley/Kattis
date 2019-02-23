/*
Evan Crowley
Kattis - Faktor
https://open.kattis.com/problems/faktor
*/
#include<iostream>
using namespace std;
int main()
{
    int a, b, x;
    cin >> a >> b;
    x = a * (b - 1);
    cout << x + 1;
    return 0;
}