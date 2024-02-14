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
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "YES\n";
            continue;
        }
        bool flag = false;
        for (int c : adj[a])
        {
            if (c == b)
            {
                flag = true;
                break;
            }
        }
        flag ? cout << "YES" : cout << "NO";
        cout << nl;
    }
    return 0;
}