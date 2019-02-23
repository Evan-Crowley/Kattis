/*
Evan Crowley
Kattis - Bijele
https://open.kattis.com/problems/bijele
*/
#include<iostream>
using namespace std;
int main()
{
    int king, queen, rooks, bishops, knights, pawns;
    int needking, needqueen, needrooks, needbishops, needknights, needpawns;
    cin >> king >> queen >> rooks >> bishops >> knights >> pawns;
    needking = 1 - king;
    needqueen = 1 - queen;
    needrooks = 2 - rooks;
    needbishops = 2 - bishops;
    needknights = 2 - knights;
    needpawns = 8 - pawns;
    cout << needking << " " << needqueen << " " << needrooks << " " << needbishops
    << " " << needknights << " " << needpawns;
    return 0;
}