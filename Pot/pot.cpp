/*
Evan Crowley
Kattis - Pot
https://open.kattis.com/problems/pot
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, i = 0, num, p, sum = 0;
    cin >> n;
    while (i < n)
    {
        cin >> num;
        p = num % 10;
        num = num / 10;
        sum += pow(num, p);
        i++;
    }
    cout << sum << endl;
    system("pause");
    return 0;
}