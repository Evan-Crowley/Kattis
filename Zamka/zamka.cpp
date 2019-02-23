/*
Evan Crowley
Kattis - Zamka
https://open.kattis.com/problems/zamka
*/
#include<iostream>
using namespace std;

int numsum(int x)
{
    int digit, sum = 0;
    while (x != 0)
    {
        digit = x % 10;
        sum += digit;
        x = x / 10;
    }
    return sum;
}
int main()
{
    int lowrange, uprange, magicnum, i;
    cin >> lowrange >> uprange >> magicnum;
    i = lowrange;
    while (numsum(i) != magicnum) i = i + 1;
    cout << i << endl;
    i = uprange;
    while (numsum(i) != magicnum) i = i - 1;
    cout << i << endl;
    return 0;
}