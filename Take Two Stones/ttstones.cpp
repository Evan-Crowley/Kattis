/*
Evan Crowley
Kattis - Takes Two Stones
https://open.kattis.com/problems/twostones
*/
#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    cin >> i;
    if(i % 2 == 1) cout << "Alice";
    else cout << "Bob";
    return 0;
}