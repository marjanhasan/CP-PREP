#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>

const int N = 25;
bool vis[N][N];
int n, m, cnt;
char c[N][N];
vector<pi> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    return (i >= 0 && i < m && j >= 0 && j < n && c[i][j] == '.');
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    cnt++;
    for (pi cd : dir)
    {
        int ci = si + cd.first;
        int cj = sj + cd.second;
        if (valid(ci, cj) && !vis[ci][cj])
            dfs(ci, cj);
    }
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> n >> m;
        int si, sj;
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cin >> c[j][k];
                vis[j][k] = false;
                if (c[j][k] == '@')
                {
                    si = j;
                    sj = k;
                }
            }
        }
        cnt = 0;
        dfs(si, sj);
        cout << "Case " << i << ": " << cnt << nl;
    }

    return 0;
}