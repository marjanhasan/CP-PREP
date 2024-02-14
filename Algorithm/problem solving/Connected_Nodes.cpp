#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<int> adj[1005];

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        vector<int> v;
        if (adj[x].empty())
        {
            cout << -1 << nl;
            continue;
        }
        for (int a : adj[x])
            v.push_back(a);
        sort(v.rbegin(), v.rend());
        for (int a : v)
            cout << a << " ";
        cout << nl;
    }
    return 0;
}