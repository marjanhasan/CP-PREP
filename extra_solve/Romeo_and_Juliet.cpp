#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
int dis[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dis[src] = 1;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int c : adj[p])
        {
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                dis[c] = dis[p] + 1;
            }
        }
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;
    int a, b;
    while (e--)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    int x, y, k;
    cin >> x >> y >> k;
    bfs(x);
    int d = dis[y];
    if (d != -1)
    {
        if (k > d)
            cout << "YES" << nl;
        else if (k >= d / 2)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    else
        cout << "NO" << nl;
    return 0;
}