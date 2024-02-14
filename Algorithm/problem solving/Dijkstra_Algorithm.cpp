#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>

const int N = 105;
vector<pair<int, int>> adj[N];
int dis[N];

void dijkstra(int s)
{
    queue<pi> q;
    q.push({s, 0});
    dis[s] = 0;
    while (!q.empty())
    {
        int pn = q.front().first;
        int pw = q.front().second;
        q.pop();
        for (pi c : adj[pn])
        {
            int cn = c.first;
            int cw = c.second;
            int nw = pw + cw;
            if (nw < dis[cn])
            {
                dis[cn] = nw;
                q.push({cn, nw});
            }
        }
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, s, d;
    cin >> n >> s >> d;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] > 0)
                adj[i].push_back({j, mat[i][j]});
        }
    }
    for (int i = 0; i <= n; i++)
        dis[i] = INT_MAX;
    dijkstra(s);
    for (int i = 0; i < n; i++)
    {
        cout << i << " " << dis[i] << nl;
    }
    cout << dis[d];
    return 0;
}