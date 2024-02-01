#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

const int N = 1005;
vector<pair<int, int>> cd = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool vis[N][N];
int dis[N][N];
int n, m;
char arr[N][N];

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && arr[i][j] == '.');
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        int pi = q.front().first;
        int pj = q.front().second;
        q.pop();
        for (auto c : cd)
        {
            int ci = c.first + pi;
            int cj = c.second + pj;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[pi][pj] + 1;
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
            cin >> arr[i][j];
    }
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);
    dis[di][dj] != -1 ? cout << "YES" : cout << "NO";
    cout << nl;
    return 0;
}