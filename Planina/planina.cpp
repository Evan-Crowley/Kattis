/*
Evan Crowley
Kattis - Planina
https://open.kattis.com/problems/planina
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int edge = 2, points = 0;
    for (int i = 0; i < x; i++)
    {
        edge = (edge * 2) - 1;
        points = edge * edge;
    }
    cout << points << endl;
    system("pause");
    return 0;
}