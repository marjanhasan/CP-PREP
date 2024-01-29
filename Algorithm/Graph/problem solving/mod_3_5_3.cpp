#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<int> v[1005];
bool vis[1005];
int cnt;

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
    memset(vis, false, sizeof(vis));
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            cnt = 0;
            dfs(i);
            ans.push_back(cnt);
        }
    }
    sort(ans.begin(), ans.end());
    for (int val : ans)
        cout << val << " ";
    return 0;
}