#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<int> v[1005];
bool vis[1005];
bool path[1005];
bool flag = false;

void dfs(int src)
{
    vis[src] = true;
    path[src] = true;

    for (int c : v[src])
    {
        if (path[c])
            flag = true;
        if (!vis[c])
            dfs(c);
    }
    path[src] = false;
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
    }
    memset(vis, false, sizeof(vis));
    memset(path, false, sizeof(path));

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    flag ? cout << "cycle detected" : cout << "cycle not detected";
    cout << nl;
    return 0;
}