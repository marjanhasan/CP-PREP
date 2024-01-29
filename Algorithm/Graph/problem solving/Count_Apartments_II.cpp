#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int n, m;
char arr[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> cd = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int cnt;

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && arr[i][j] != '#');
}

void dfs(int si, int sj)
{
    cnt++;
    vis[si][sj] = true;
    for (auto c : cd)
    {
        int ci = c.first + si;
        int cj = c.second + sj;
        if (valid(ci, cj) && !vis[ci][cj])
            dfs(ci, cj);
    }
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    memset(vis, false, sizeof(vis));
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && arr[i][j] != '#')
            {
                cnt = 0;
                dfs(i, j);
                ans.push_back(cnt);
            }
        }
    }
    if (ans.empty())
    {
        cout << 0 << nl;
        return 0;
    }
    sort(ans.begin(), ans.end());
    for (int v : ans)
        cout << v << " ";
    return 0;
}