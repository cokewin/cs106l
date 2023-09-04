// lambda expressions, closure, ana func
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {3, 1, 7, 9};
    vector<int> v2 = {10, 2, 7, 16, 9};

    auto pushinto = [&] (int m)
    {
        v1.push_back(m);
        v2.push_back(m);
    };

    pushinto(20);

    [v1]()
    {
        for (auto p = v1.begin(); p != v1.end(); p++)
        {
            cout << *p << " ";
        }
    };
}
