/*
Evan Crowley
Kattis - Apaxiaaaaaaaaaaaans!
https://open.kattis.com/problems/apaxiaaans
*/
#include <iostream>
#include <string>

int main() {
    using namespace std;
    string outputR;
    string inChar;
    char previous;
    int i = 0;

    cin >> inChar;
    outputR += inChar[0];
    previous = inChar[0];


    while (i < inChar.length())
    {
        i++;
        if (inChar[i] != previous)
        {
            outputR += inChar[i];
        }
        previous = inChar[i];
    }

    cout << outputR << endl;
    system("pause");
    return 0;
}