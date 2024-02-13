#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>

void bfs(int s, int n, vector<int> adj[], bool vis[], int dis[])
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    dis[s] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int c : adj[p])
        {
            if (!vis[c])
            {
                q.push(c);
                dis[c] = dis[p] + 1;
                vis[c] = true;
            }
        }
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> adj[n];
        bool vis1[n];
        bool vis2[n];
        int dis1[n];
        int dis2[n];
        while (m--)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        memset(vis1, false, sizeof(vis1));
        memset(vis2, false, sizeof(vis2));
        memset(dis1, -1, sizeof(dis1));
        memset(dis2, -1, sizeof(dis2));
        int s, d;
        cin >> s >> d;
        bfs(s, n, adj, vis1, dis1);
        bfs(d, n, adj, vis2, dis2);
        int ans = 0;
        for (int j = 0; j < n; j++)
            ans += max(ans, dis1[j] + dis2[j]);
        cout << "Case " << i << ": " << ans << nl;
    }
    return 0;
}