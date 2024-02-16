#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>
int const N = 1005;
vector<pi> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool vis[N][N];
char c[N][N];
int n, m, cnt;
bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && c[i][j] == '.');
}
void bfs(int si, int sj)
{
    queue<pi> q;
    q.push({si, sj});
    vis[si][sj] = true;
    cnt++;
    while (!q.empty())
    {
        int pii = q.front().first;
        int pj = q.front().second;
        q.pop();
        for (pi c : dir)
        {
            int ci = c.first + pii;
            int cj = c.second + pj;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                cnt++;
            }
        }
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
            cin >> c[i][j];
    }
    memset(vis, false, sizeof(vis));
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (c[i][j] == '.' && !vis[i][j])
            {
                cnt = 0;
                bfs(i, j);
                ans = min(ans, cnt);
            }
        }
    }
    ans == INT_MAX ? cout << -1 : cout << ans;
    return 0;
}