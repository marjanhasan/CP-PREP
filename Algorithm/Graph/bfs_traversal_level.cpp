#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<int> v[1005];
bool vis[1005];
int level[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        // cout << par << " ";

        for (int x : v[par])
        {
            if (!vis[x])
            {
                q.push(x);
                vis[x] = true;
                level[x] = level[par] + 1;
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(src);
    for (int i = 0; i < n; i++)
        cout << i << " " << level[i] << nl;
    return 0;
}