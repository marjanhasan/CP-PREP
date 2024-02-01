#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

const int N = 105;
int vis[N][N];
int dis[N][N];
vector<pair<int, int>> cd = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};
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
        int pi = q.front().first;
        int pj = q.front().second;
        q.pop();

        for (pair<int, int> p : cd)
        {
            int ci = p.first + pi;
            int cj = p.second + pj;

            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[pi][pj] + 1;
            }
        }
    }
}

void reset()
{
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, ki, kj, qi, qj;
    cin >> t;
    reset();
    while (t--)
    {
        cin >> n >> m;
        cin >> ki >> kj;
        cin >> qi >> qj;
        if (ki == qi && kj == qj)
        {
            cout << 0 << nl;
            continue;
        }
        bfs(ki, kj);
        cout << dis[qi][qj] << nl;
        reset();
    }
    return 0;
}