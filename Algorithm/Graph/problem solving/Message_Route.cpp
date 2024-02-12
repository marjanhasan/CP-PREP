#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>

const ll N = 1e5 + 5;
vector<ll> adj[N];
bool vis[N];
ll dis[N];
ll par[N];
void bfs(ll s)
{
    queue<ll> q;
    q.push(s);
    vis[s] = true;
    dis[s] = 0;
    while (!q.empty())
    {
        ll p = q.front();
        q.pop();
        for (ll c : adj[p])
        {
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                dis[c] = dis[p] + 1;
                par[c] = p;
            }
        }
    }
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    memset(par, -1, sizeof(par));
    bfs(1);
    if (dis[n] == -1)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }
    vector<ll> v;
    while (n != -1)
    {
        v.push_back(n);
        n = par[n];
    }
    reverse(v.begin(), v.end());
    cout << v.size() << nl;
    for (int x : v)
        cout << x << " ";
    return 0;
}