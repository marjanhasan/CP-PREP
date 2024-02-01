#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

const ll N = 1005;
vector<pair<ll, ll>> adj[N];
ll dis[N];

class cmp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        ll par = pq.top().first;
        ll cost = pq.top().second;
        pq.pop();

        for (pair<ll, ll> p : adj[par])
        {
            ll child = p.first;
            ll childCost = p.second;
            ll newCost = cost + childCost;
            if (newCost < dis[child])
            {
                pq.push({child, newCost});
                dis[child] = newCost;
            }
        }
    }
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, e;
    cin >> n >> e;

    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
    }
    ll src;
    cin >> src;
    for (ll i = 1; i <= n; i++)
        dis[i] = INT_MAX;
    dijkstra(src);
    ll q;
    cin >> q;
    while (q--)
    {
        ll d, dw;
        cin >> d >> dw;
        (dis[d] != INT_MAX && dis[d] <= dw) ? cout << "YES" : cout << "NO";
        cout << nl;
    }
    return 0;
}