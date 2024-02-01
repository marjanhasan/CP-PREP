#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, e;
    cin >> n >> e;
    ll adj[n + 5][n + 5];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            adj[i][j] = LLONG_MAX;
            if (i == j)
                adj[i][j] = 0;
        }
    }
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        if (adj[a][b] == LLONG_MAX || adj[a][b] > w)
            adj[a][b] = w;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] < LLONG_MAX && adj[k][j] < LLONG_MAX && adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] != LLONG_MAX ? cout << adj[a][b] : cout << -1;
        cout << nl;
    }
    return 0;
}