#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

char a[20][20];
bool vis[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int i, int j)
{
    /* if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true; */

    return (i >= 0 && i < n && j >= 0 && j < m);
}
void dfs(int si, int sj)
{
    cout << si << " " << sj << nl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = d[i].first + si;
        int cj = d[i].second + sj;
        if (valid(ci, cj) && !vis[ci][cj])
        {
            dfs(ci, cj);
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
            cin >> a[i][j];
    }

    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    return 0;
}