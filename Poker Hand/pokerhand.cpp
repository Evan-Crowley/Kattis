/*
Evan Crowley
Kattis - Poker Hand
https://open.kattis.com/problems/pokerhand
*/
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    string card1, card2, card3, card4, card5;
    cin >> card1 >> card2 >> card3 >> card4 >> card5;
    int count1=1, count2=1, count3=1, count4=1;
    if (card1[0] == card2[0] || card1[0] == card3[0] || card1[0] == card4[0] || card1[0] == card5[0])
    {
        if (card1[0] == card2[0]) count1++;
        if (card1[0] == card3[0]) count1++;
        if (card1[0] == card4[0]) count1++;
        if (card1[0] == card5[0]) count1++;
    }
    if (card2[0] == card1[0] || card2[0] == card3[0] || card2[0] == card4[0] || card2[0] == card5[0])
    {
        if (card2[0] == card1[0]) count2++;
        if (card2[0] == card3[0]) count2++;
        if (card2[0] == card4[0]) count2++;
        if (card2[0] == card5[0]) count2++;
    }
    if (card3[0] == card1[0] || card3[0] == card2[0] || card3[0] == card4[0] || card3[0] == card5[0])
    {
        if (card3[0] == card1[0]) count3++;
        if (card3[0] == card2[0]) count3++;
        if (card3[0] == card4[0]) count3++;
        if (card3[0] == card5[0]) count3++;
    }
    if (card4[0] == card1[0] || card4[0] == card3[0] || card4[0] == card2[0] || card4[0] == card5[0])
    {
        if (card4[0] == card1[0]) count4++;
        if (card4[0] == card3[0]) count4++;
        if (card4[0] == card2[0]) count4++;
        if (card4[0] == card5[0]) count4++;
    }
    if (count1 >= count2 && count1 >= count3 && count1 >= count4) cout << count1 << endl;
    else if (count2 >= count1 && count2 >= count3 && count2 >= count4) cout << count2 << endl;
    else if (count3 >= count2 && count3 >= count1 && count3 >= count4) cout << count3 << endl;
    else if (count4 >= count2 && count4 >= count3 && count4 >= count1) cout << count4 << endl;
    system("pause");
    return 0;
}