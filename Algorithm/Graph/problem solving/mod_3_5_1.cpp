#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<int> v[1005];
bool vis[1005];
int cnt = 0;

void dfs(int src)
{
    cnt++;
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
    int node;
    cin >> node;
    dfs(node);
    cout << cnt;
    return 0;
}