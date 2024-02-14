#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>
const int N = 1e5 + 5;
vector<int> adj[N];
vector<bool> vis(N, false);
vector<int> par(N, -1);
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
    int s, d;
    cin >> s >> d;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(s);
    if(par[d]==-1)
    {
        cout<<-1;
        return 0;
    }
    vector<int> v;
    while (d != -1)
    {
        v.push_back(d);
        d = par[d];
    }
    reverse(v.begin(), v.end());
    cout << v.size() - 1 << nl;
    for(int x:v)
        cout<<x<<" ";
    return 0;
}