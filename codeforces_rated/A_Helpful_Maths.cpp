#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<char> v;
    char c;
    while (cin >> c)
    {
        if (c != '+')
            v.push_back(c);
    }
    sort(v.begin(), v.end());
    cout << v[0];
    for (int i = 1; i < v.size(); i++)
        cout << '+' << v[i];

    return 0;
}