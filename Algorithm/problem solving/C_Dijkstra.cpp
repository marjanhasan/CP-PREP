#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>

const int N = 1e5 + 5;
vector<pi> adj[N];
ll dis[N];
int par[N];
class cmp
{
public:
    bool operator()(pi a, pi b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pi, vector<pi>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        int parNode = pq.top().first;
        ll parCost = pq.top().second;
        pq.pop();
        for (pi child : adj[parNode])
        {
            int childNode = child.first;
            ll childCost = child.second;
            if (parCost + childCost < dis[childNode])
            {
                dis[childNode] = parCost + childCost;
                par[childNode] = parNode;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }
    for (int i = 0; i <= n; i++)
    {
        dis[i] = 1e18;
        par[i] = -1;
    }
    dijkstra(1);
    if (dis[n] != 1e18)
    {
        vector<int> v;
        while (n != -1)
        {
            v.push_back(n);
            n = par[n];
        }
        reverse(v.begin(), v.end());
        for (int x : v)
            cout << x << " ";
    }
    else
        cout << -1;
    return 0;
}