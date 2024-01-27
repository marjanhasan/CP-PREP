#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    // long cut output
    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;

    // short cut output
    for (pair<int, int> p : v)
        cout << p.first << " " << p.second << nl;

    // ultra short cut output
    for (auto p : v)
        cout << p.first << " " << p.second << nl;
    return 0;
}

/*
input:
6 6
0 1
1 5
0 4
0 3
3 4
2 4

*/