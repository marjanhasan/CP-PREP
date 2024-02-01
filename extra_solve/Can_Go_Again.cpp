#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

class Edge
{
public:
    ll u, v, c;
    Edge(ll u, ll v, ll c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, e;
    cin >> n >> e;
    vector<Edge> v;
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        v.push_back(Edge(a, b, w));
    }

    ll dis[n + 5];
    for (int i = 1; i <= n + 5; i++)
        dis[i] = LLONG_MAX;
    ll src;
    cin >> src;
    dis[src] = 0;
    for (int i = 1; i < n; i++)
    {
        for (Edge e : v)
        {
            ll u = e.u;
            ll v = e.v;
            ll c = e.c;
            if (dis[u] < LLONG_MAX && dis[u] + c < dis[v])
                dis[v] = dis[u] + c;
        }
    }
    bool flag = false;
    for (Edge e : v)
    {
        ll u = e.u;
        ll v = e.v;
        ll c = e.c;
        if (dis[u] < LLONG_MAX && dis[u] + c < dis[v])
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Negative Cycle Detected";
        return 0;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        dis[d] != LLONG_MAX ? cout << dis[d] : cout << "Not Possible";
        /*  if (dis[d] == INT_MAX)
             cout << "Not Possible";
         else
             cout << dis[d]; */
        cout << nl;
    }
    return 0;
}