#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>
class Edge
{
public:
    ll u, v, w;
    Edge(ll u, ll v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
const int N = 1e5 + 5;
vector<int> par(N, -1);
vector<int> gs(N, 1);
int dsu_find(int n)
{
    if (par[n] == -1)
        return n;
    return par[n] = dsu_find(par[n]);
}
void dsu_union(int a, int b)
{
    int la = dsu_find(a);
    int lb = dsu_find(b);
    if (gs[la] > gs[lb])
    {
        par[lb] = la;
        gs[la] += gs[lb];
    }
    else
    {
        par[la] = lb;
        gs[lb] += gs[la];
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;
    vector<Edge> edgeList;
    while (e--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    ll cost = 0;
    bool flag = false;
    for (Edge ed : edgeList)
    {
        int la = dsu_find(ed.u);
        int lb = dsu_find(ed.v);
        if (la != lb)
        {
            dsu_union(la, lb);
            cost += ed.w;
        }
    }
    int la = dsu_find(1);
    for (int i = 2; i <= n; i++)
    {
        int lb = dsu_find(i);
        if (la != lb)
        {
            flag = true;
            break;
        }
    }
    flag ? cout << -1 : cout << cost;
    return 0;
}