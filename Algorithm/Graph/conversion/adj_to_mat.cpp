#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
void adj_to_mat(int n, vector<int> adj[])
{
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = 0;
            if (i == j)
                mat[i][j] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j : adj[i])
            mat[i][j] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
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
    vector<int> adj[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    adj_to_mat(n, adj);
    return 0;
}