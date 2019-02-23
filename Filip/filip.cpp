/*
Evan Crowley
Kattis - Filip
https://open.kattis.com/problems/filip
*/
#include<iostream>

using namespace std;

int numflip(int num)
{
    int new_num = 0;
    while (num > 0)
    {
        new_num = new_num * 10 + (num % 10);
        num = num / 10;
    }
    return new_num;
}

int main()
{
    int a, b, aflip, bflip;
    cin >> a >> b;
    aflip = numflip(a);
    bflip = numflip(b);
    if (aflip > bflip)
        cout << aflip << endl;
    else cout << bflip << endl;
    return 0;
}