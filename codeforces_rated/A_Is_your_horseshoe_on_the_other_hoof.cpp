#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int x;
    while (cin >> x)
    {
        l.push_back(x);
    }
    l.sort();
    l.unique();
    cout << 4 - l.size();
    return 0;
}
