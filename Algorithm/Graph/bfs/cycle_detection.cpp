#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
int parent[N];
bool flag = false;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int c : adj[par])
        {
            if (vis[c] && parent[par] != c)
                flag = true;
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                parent[c] = par;
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
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            bfs(i);
    }
    flag ? cout << "cycle found" : cout << "cycle not found";
    cout << nl;
    return 0;
}