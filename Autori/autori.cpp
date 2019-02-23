/*
Evan Crowley
Kattis - Autori
https://open.kattis.com/problems/autori
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string fullname;
    string abrev = "";
    int i = 0, j = 0;
    getline(cin, fullname);
    while (i < fullname.length())
    {
        if ('A' <= fullname[i] && fullname[i] <= 'Z')
        {
            abrev += fullname[i];
            i++;
        }
        else i++;
    }
    cout << abrev << endl;
    return 0;
}