/*
Evan Crowley
Kattis - Tarifa
https://open.kattis.com/problems/tarifa
*/
#include<iostream>
using namespace std;

int main()
{
    int x, months, used, total = 0, i = 0;
    cin >> x >> months;
    while (i < months)
    {
        cin >> used;
        total = total + x - used;
        i++;
    }
    cout << total + x;
    return 0;
}