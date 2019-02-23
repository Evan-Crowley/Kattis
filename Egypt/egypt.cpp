/*
Evan Crowley
1/24/18
Kattis - Egypt
https://open.kattis.com/problems/egypt
*/
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cassert>
#include <cstdio>

using namespace std;

string answer (int *sides) {
    sort(sides, sides+3);
    if (pow(sides[0],2) + pow (sides[1], 2) == pow (sides[2], 2))
        return "right";
    else 
        return "wrong";
}

void test() {
    int input1[] = {6, 8, 10};
    assert(answer(input1) == "right");
    int input2[] = {3, 4, 5};
    assert(answer(input2) == "right"); 
    int input3[] = {5, 12, 13};
    assert(answer(input3) == "right");
    int input4[] = {1, 2, 3};
    assert(answer(input4) == "wrong");
    int input5[] = {100, 2000, 30000};
    assert(answer(input5) == "wrong");
}

void solve(){
    int sides[3];
    while (cin >> sides[0] >> sides[1] >> sides[2] && sides[0] != 0 &&
    sides[1] != 0) {
        printf("%s\n", answer(sides).c_str());
    }
}

int main(int argc, char* argv[]) {
    if (argc > 1 && strncmp(argv[1], "test", 4) == 0) {
        //run local tests
        test();
    }
    else {
        //solve kattis test cases
        solve();
    }
}