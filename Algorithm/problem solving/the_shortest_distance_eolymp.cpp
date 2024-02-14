#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>

const int N = 1005;
vector<int> adj[N];
vector<bool> vis(N, false);
vector<int> dis(N, -1);
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    dis[s] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int c : adj[p])
        {
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                dis[c] = dis[p] + 1;
            }
        }
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, s;
    cin >> n >> s;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
                adj[i + 1].push_back(j + 1);
        }
    }
    bfs(s);
    for (int i = 1; i <= n; i++)
        cout << dis[i] << " ";
    return 0;
}