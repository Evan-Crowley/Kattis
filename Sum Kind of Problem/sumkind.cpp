/*
Evan Crowley
1/25/18
Kattis - Sum Kind of Problem
https://open.kattis.com/problems/sumkindofproblem
*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cassert>
#include <cstring>

using namespace std;
using ui = unsigned int; //type alias for unsigned int

// function prototypes
void test1();
void test2();
void test3();

// function that returns sum of the first N postitive integers
ui S1(ui N) {
    //FIXME 4 (20 points)
    //Use formula instead
    //Get rid of or comment out loop and any unnecessary code
    //using formula: sum = N*(N+1)/2;
    ui sum = N*(N+1)/2;
    return sum;
}

//funcion that returns sum of the first N odd integers
ui S2(ui N) {
    //FIXME 5 (20 points) use formula instead
    //Find the correct formla in the given hint link
    /*ui sum = 0;
    ui num = 1;
    ui count = 1;
    while (count <= N) {
        sum += num;
        num += 2;
        ++count;
    }
    return sum;*/
    ui sum = (N*N);
    return sum;
}

//function that returns sum of the first N even integers
ui S3(ui N) {
    //FIXME 6 (20 points) use formula instead
    //Find the correct formula in the given hint link
    /*ui sum = 0;
    for(int i=2; i<=N*2; i+=2)
        sum += i;

    return sum;*/
    ui sum = ((N*N)+N);
    return sum;
}

// main function that actually solves the problem
void solve(ui K, ui N) {
    ui s1 = S1(N);
    ui s2 = S2(N);
    ui s3 = S3(N);
    printf("%d %d %d %d\n", K, s1, s2, s3);
}

// main entry point
int main(int argc, char* argv[]) {
    if (argc > 1 && strncmp(argv[1], "test", 4) == 0) {
        //run your test cases
        test1();
        test2();
        test3();
    }
    else {
        // run kattis tests
        ui P, K, N;
        cin >> P;
        //ui nsq = 0;
        for(ui i=0; i<P; ++i) {
            cin >> K >> N;
            solve(K,N);
        }
    }
    return 0;
}

void test1() {
    ui N = 1;
    assert(S1(N) == 1);
    assert(S2(N) == 1);
    assert(S3(N) == 2);
    N = 10;
    assert(S1(N) == 55);
    assert(S2(N) == 100);
    assert(S3(N) == 110);
    N = 1001;
    assert(S1(N) == 501501);
    assert(S2(N) == 1002001);
    assert(S3(N) == 1003002);
    cout << "test1: all test cases passed...\n";
}

void test2() {
    // little better way
    // uitlizes arrays to store input and output values for conciseness
    ui P = 2; //# of test cases
    ui Ns[] = {2, 15}; // test cases
    ui Ans[][3] = {{3, 4, 6}, {120, 225, 240}}; // corresponding answer for each test case
    for(ui i=0; i<P; ++i) {
        assert(S1(Ns[i]) == Ans[i][0]);
        assert(S2(Ns[i]) == Ans[i][1]);
        assert(S3(Ns[i]) == Ans[i][2]);
    }
    cout << "test2: all test cases passed...\n";
}

//FIXME 7 (20 points)
// Add a third test function with at least 4 test cases that
// are not covered by previous 2 test functions
// Call and test the function in main in appropriate place
void test3() {
    ui N = 66;
    assert(S1(N) == 2211);
    assert(S2(N) == 4356);
    assert(S3(N) == 4422);
    N = 77;
    assert(S1(N) == 3003);
    assert(S2(N) == 5929);
    assert(S3(N) == 6006);
    N = 894;
    assert(S1(N) == 400065);
    assert(S2(N) == 799236);
    assert(S3(N) == 800130);
    N = 427;
    assert(S1(N) == 91378);
    assert(S2(N) == 182329);
    assert(S3(N) == 182756);
    N = 8994;
    assert(S1(N) == 40450515);
    assert(S2(N) == 80892036);
    assert(S3(N) == 80901030);
    N = 2323;
    assert(S1(N) == 2699326);
    assert(S2(N) == 5396329);
    assert(S3(N) == 5398652);
    cout << "test3: all test cases passed...\n";
}