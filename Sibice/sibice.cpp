/*
Evan Crowley
Kattis - Sibice
https://open.kattis.com/problems/sibice
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int numMatches, l, w, match, i = 0;
    float maxlength;
    cin >> numMatches >> l >> w;
    maxlength = sqrt(pow(l, 2) + pow(w, 2));
    while (i < numMatches)
    {
        cin >> match;
        if (match <= maxlength) cout << "DA" << endl;
        else cout << "NE" << endl;
        i++;
    }
    return 0;
}