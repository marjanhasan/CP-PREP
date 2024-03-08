#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int n, m;
int a[1005][1005];
vector<pii> dir = {{-1, 1}, {1, -1}, {1, 1}, {-1, -1}};
bool vis[1005][1005];
int dis[1005][1005];
pii par[1005][1005];
bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && a[i][j] != 0);
}
void bfs(int si, int sj)
{
    queue<pii> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        int pi = q.front().first;
        int pj = q.front().second;
        q.pop();
        for (pii cd : dir)
        {
            int ci = pi + cd.first;
            int cj = pj + cd.second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[pi][pj] + 1;
                par[ci][cj] = {pi, pj};
            }
        }
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> n >> m;
        int di, dj, si, sj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == -1)
                {
                    si = i;
                    sj = j;
                }
                if (a[i][j] == -2)
                {
                    di = i;
                    dj = j;
                }
                vis[i][j] = false;
                dis[i][j] = -1;
                par[i][j] = {-1, -1};
            }
        }
        bfs(si, sj);
        if (par[di][dj].first == -1)
            cout << "Case " << i << ": Impossible" << nl;
        else
        {
            ll sum = 0;
            vector<int> v;
            pii x = par[di][dj];
            while (x.first != -1)
            {
                if (a[x.first][x.second] == -1)
                    break;
                sum += a[x.first][x.second];
                v.push_back(a[x.first][x.second]);
                x = par[x.first][x.second];
            }
            cout << "Case " << i << ": " << sum << nl;
        }
    }
    return 0;
}