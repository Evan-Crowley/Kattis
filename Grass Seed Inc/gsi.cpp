/*
Evan Crowley
Kattis - Grass Seed Inc.
https://open.kattis.com/problems/grassseed
*/
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float seedcost, cost, w, l;
    int numlawns;
    cin >> seedcost >> numlawns;
    cout << setprecision(8);
    for (int i = 0; i < numlawns; i++)
    {
        cin >> w >> l;
        cost += w * l * seedcost;
    }
    cout << cost << endl;
    return 0;
}