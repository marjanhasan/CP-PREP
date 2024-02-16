#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>
class Edge
{
public:
    int u, v;
    ll w;
    Edge(int u, int v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
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
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
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
        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(Edge(a, b, c));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    ll cnt = 0, c = 0;
    for (Edge ed : edgeList)
    {
        int la = dsu_find(ed.u);
        int lb = dsu_find(ed.v);
        if (la == lb)
            cnt++;
        else
        {
            dsu_union(la, lb);
            c += ed.w;
        }
    }
    bool flag = false;
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
    flag ? cout << "Not Possible" : cout << cnt << " " << c;
    return 0;
}