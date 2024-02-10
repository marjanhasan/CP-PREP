#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
void mat_to_adj_wet(int n, vector<vector<int>> mat)
{
    vector<pair<int, int>> adj[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] > 0)
                adj[i].push_back({j, mat[i][j]});
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (pair<int, int> c : adj[i])
            cout << i << " " << c.first << " " << c.second << nl;
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            mat[i][j] = x;
        }
    }
    mat_to_adj_wet(n, mat);
    return 0;
}