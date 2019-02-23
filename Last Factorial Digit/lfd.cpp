/*
Evan Crowley
Kattis - Last Factorial Digit
https://open.kattis.com/problems/lastfactorialdigit
*/
#include<iostream>
using namespace std;

int main()
{
    int numtests, factoral, count;
    cin >> numtests;
    for (int i = 0; i < numtests; i++)
    {
        cin >> factoral;
        count = 1;
        for (int x = 1; x <= factoral; x++)
        {
            count = count * x;
        }
    cout << (count % 10) << endl;
    }
    return 0;
}