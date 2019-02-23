/*
Evan Crowley
Kattis - Spavanac
https://open.kattis.com/problems/spavanac
*/
#include<iostream>
using namespace std;
int main()
{
    int h, m;
    cin >> h >> m;
    if (h == 0 && m < 45)
    {
        h = 23;
        m = 45 - m;
        m = 60 - m;
    }
    else if (m < 45)
    {
        h = h - 1;
        m = 45 - m;
        m = 60 - m;
    }
    else m = m - 45;
    cout << h << " " << m << endl;
    return 0;
}