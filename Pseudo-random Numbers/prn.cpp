/*
Evan Crowley
2/23/19
Kattis - Pseudo-random Numbers
https://open.kattis.com/problems/pseudorandomnumbers
*/
#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include <algorithm>

using namespace std;

// printVector helper function
template<class T>
void printVector(const vector<T>& v) {
    char comma[3] = {'\0', ' ', '\0'};
    cout << '[';
    for (const auto& e: v) {
        cout << comma << e;
        comma[0] = ',';
    }
    cout << ']' << '\n';
}

void pRandAlgo(int b, int seed)
{
    vector<int> out;
    out.push_back(seed % 10);
    vector<int> vseed;
    while(seed > 0)
    {
        vseed.push_back(seed % 10);
        seed /= 10;
    }
    printVector(out);
    printVector(vseed);
    int s = vseed.size();
    cout << s << endl;
    sort(vseed.rbegin(), vseed.rend());
    sort(vseed.rbegin(), vseed.rend());
    printVector(vseed);
}

int main(int argc, char *argv[])
{
    /*int n;
    cin >> n;
    vector<int> line;
    while(n > 0)
    {
        int b, l;
        cin >> b >> l;
        for (int i = 0; i < l; i++)
        {
            cin >> line[i];
        }
        int t;
        cin >> t;

        n--;
    }*/
    pRandAlgo(10, 845);

    return 0;
}