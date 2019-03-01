/*
Evan Crowley
2/25/19
Kattis - Bacon, Eggs, and Spam
https://open.kattis.com/problems/baconeggsandspam
*/
#include <iostream>
#include <iomanip>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

// printVector helper function
template<class T>
void printVector(const vector<T>& v) {
    for (const auto& e: v) {
        cout << printFood();
    }
    cout << '\n';
}

class Food {
    private:
    public:
        string food;
        string name;
        int *index = 0;
        Food(string f, string n);
        static bool SORT_BY_NAME(const Food & i, const Food & j) 
        {
            return i.name.compare(j.name) < 0;
        }
        void printFood();
};

void Food::printFood() 
{
    cout << food << " " << name << endl;
}

Food::Food(string f, string n)
{
    food = f;
    name = n;
    *index++;
}


int main(int argc, char * argv[])
{
    int n = 1;
    vector<Food> foods;
    while (n > 0)
    {
        cin >> n;
        string in;
        for (int i = 0; i < n; i++)
        {
            //Food day;
            string name, food, in;
            stringstream ss;
            cin >> name;
            getline(cin, in);
            ss.str(in);
            cout << name << " " << in << ": stored input" << endl;
            while (!ss.eof())
            {
                ss >> food;
                cout << food << ": food input" << endl;
                new Food(food, name);
                foods.push_back(Food);
            }
            printVector(foods);
        }
    }
    return 0;
}