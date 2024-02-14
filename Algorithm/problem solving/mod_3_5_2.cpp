#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<int> v[1005];
bool vis[1005];

void dfs(int src)
{
    vis[src] = true;
    for (int c : v[src])
    {
        if (!vis[c])
            dfs(c);
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
    memset(vis, false, sizeof(vis));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}