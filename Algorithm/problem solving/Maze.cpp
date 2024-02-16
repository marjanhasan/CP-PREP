#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>
const int N = 1005;
char c[N][N];
bool vis[N][N];
pi par[N][N];
vector<pi> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, e;
bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < e && (c[i][j] == '.' || c[i][j] == 'D'));
}
void bfs(int si, int sj)
{
    queue<pi> q;
    q.push({si, sj});
    vis[si][sj] = true;
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
                par[ci][cj] = {pii, pj};
            }
        }
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> e;
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cin >> c[i][j];
            if (c[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (c[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
            par[i][j] = {-1, -1};
        }
    }
    memset(vis, false, sizeof(vis));
    bfs(si, sj);

    if (par[di][dj].first != -1 && par[di][dj].second != -1)
    {
        int x = par[di][dj].first;
        int y = par[di][dj].second;
        while (x != -1 && y != -1)
        {
            if (c[x][y] != 'R')
                c[x][y] = 'X';
            int a = x, b = y;
            x = par[a][b].first;
            y = par[a][b].second;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
            cout << c[i][j];
        cout << nl;
    }
    return 0;
}