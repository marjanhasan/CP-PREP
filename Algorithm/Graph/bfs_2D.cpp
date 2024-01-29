#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<pair<int, int>> cd = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool vis[20][20];
int dis[20][20];
int n, m;

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> f = q.front();
        q.pop();
        for (pair<int, int> c : cd)
        {
            int ci = f.first + c.first;
            int cj = f.second + c.second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[f.first][f.second] + 1;
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
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);
    cout << dis[di][dj];
    return 0;
}