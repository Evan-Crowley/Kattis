/*
Evan Crowley
Kattis - Above Average
https://open.kattis.com/problems/aboveaverage
*/
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef long double ld;

int main()
{
    ll C;
    cin >> C; // get number of tests

    while (C--) // decriment to loop for each test
    {
        ll s;
        cin >> s; // get number of students

        vector<ll> students(s); // create vector of long long for students in s

        for (auto &i : students) // auto detect type while getting input to students and pass that reference
        {
            cin >> i;
        }

        ll total = 0;
        for (auto i : students) // use auto to also increment total
        {
            total += i;
        }

        ll better = 0;
        ld average = total / ld(s); // change to long double for average
        for (auto i : students)
        {
            if (i > average) // check each students against the average for the test
            {
                better++; // increment better if above average
            }
        }

        cout << fixed;
        cout.precision(3);                               //
        cout << 100 * better / double(s) << "%" << endl; // move the decimal on better, then divide by number of students
    }                                                    // to get the average of students above average
}