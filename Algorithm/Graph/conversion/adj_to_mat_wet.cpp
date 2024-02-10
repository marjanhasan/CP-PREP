#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
void adj_to_mat_wet(int n, vector<pair<int, int>> adj[])
{
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = -1;
            if (i == j)
                mat[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (pair<int, int> j : adj[i])
        {
            mat[i][j.first] = j.second;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << nl;
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> adj[n];
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    adj_to_mat_wet(n, adj);
    return 0;
}