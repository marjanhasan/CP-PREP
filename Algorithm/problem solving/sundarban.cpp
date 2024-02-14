#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>
const int N = 35;
bool vis[N][N];
int dis[N][N];
char a[N][N];
vector<pi> dir;
int n;
bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < n && (a[i][j] == 'P' || a[i][j] == 'E'));
}
void bfs(int si, int sj)
{
    queue<pi> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        int pii = q.front().first;
        int pj = q.front().second;
        q.pop();
        for (int i = 0; i < dir.size(); i++)
        {
            int ci = dir[i].first + pii;
            int cj = dir[i].second + pj;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[pii][pj] + 1;
            }
        }
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int si, sj, di, dj;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'S')
                {
                    si = i;
                    sj = j;
                }
                if (a[i][j] == 'E')
                {
                    di = i;
                    dj = j;
                }
                dis[i][j] = -1;
                vis[i][j] = false;
            }
        }
        dir.push_back({0, 1});
        dir.push_back({0, -1});
        dir.push_back({-1, 0});
        dir.push_back({1, 0});
        bfs(si, sj);
        cout << dis[di][dj] << nl;
    }
    return 0;
}