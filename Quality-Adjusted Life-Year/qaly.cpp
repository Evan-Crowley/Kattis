/*
Evan Crowley
Kattis - Quality-Adjusted Life-Year
https://open.kattis.com/problems/qaly
*/
#include<iostream>

using namespace std;

int main()
{
    int i = 0, j = 0;
    float x = 0, y = 0, z = 0, sum = 0;
    cin >> i;
    for (j = 0; j < i; j++)
    {
        cin >> x >> y;
        z = x * y;
        sum = sum + z;
    }
    cout << sum;
    return 0;
}