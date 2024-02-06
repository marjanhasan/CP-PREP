#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int n, m;
vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool vis[1005][1005];
int dis[1005][1005];
pair<int, int> par[1005][1005];
char arr[1005][1005];
bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && (arr[i][j] == '.' || arr[i][j] == 'B'));
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
        for (auto p : dir)
        {
            int ci = p.first + pi;
            int cj = p.second + pj;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[pi][pj] + 1;
                // cout << pi << " " << pj << nl;
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

    cin >> n >> m;
    int si, sj, di, dj;
    bool flag1 = false;
    bool flag2 = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'A')
            {
                si = i;
                sj = j;
                flag1 = true;
            }
            if (arr[i][j] == 'B')
            {
                di = i;
                dj = j;
                flag2 = true;
            }
        }
    }
    if (!flag1 || !flag2)
    {
        cout << "NO";
        return 0;
    }
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            par[i][j] = {-1, -1};
    }
    bfs(si, sj);

    pair<int, int> x = {di, dj};
    if (par[di][dj].first == -1)
    {
        cout << "NO";
        return 0;
    }
    vector<pair<int, int>> path;
    while (x.first != -1)
    {
        path.push_back({x.first, x.second});
        x = par[x.first][x.second];
    }
    cout << "YES" << nl;
    cout << path.size() - 1 << nl;
    reverse(path.rbegin(), path.rend());
    // cout << si << sj << endl;
    /* for (auto p : path)
        cout << p.first << p.second << nl; */
    int a = path.begin()->first;
    int b = path.begin()->second;
    for (auto it = path.begin() + 1; it != path.end(); it++)
    {
        int c = it->first;
        int d = it->second;
        int di = c - a;
        int dj = d - b;
        a = it->first;
        b = it->second;
        if (di == 0 && dj == 1)
            cout << 'R';
        else if (di == 0 && dj == -1)
            cout << 'L';
        else if (di == -1 && dj == 0)
            cout << 'U';
        else if (di == 1 && dj == 0)
            cout << 'D';
    }
    // cout << di << dj;
    return 0;
}