#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
int par[N];
bool flag = false;

void dfs(int src)
{
    vis[src] = true;
    for (int c : adj[src])
    {
        if (vis[c] && par[src] != c)
            flag = true;
        if (!vis[c])
        {
            par[c] = src;
            dfs(c);
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
    memset(par, -1, sizeof(par));

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }

    flag ? cout << "cycle found" : cout << "cycle not found";
    cout << nl;
    return 0;
}