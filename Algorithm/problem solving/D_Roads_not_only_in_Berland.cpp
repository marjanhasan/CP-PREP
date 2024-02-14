#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>
const int N = 1005;
int par[N];
int gs[N];
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

    memset(par, -1, sizeof(par));
    memset(gs, 1, sizeof(gs));
    int n;
    cin >> n;
    vector<pi> cp;
    vector<pi> np;
    for (int i = 1; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int la = dsu_find(a);
        int lb = dsu_find(b);
        if (la == lb)
            cp.push_back({a, b});
        else
            dsu_union(a, b);
    }
    for (int i = 2; i <= n; i++)
    {
        int la = dsu_find(1);
        int lb = dsu_find(i);
        if (la != lb)
        {
            np.push_back({1, i});
            dsu_union(1, i);
        }
    }
    cout << cp.size() << nl;
    for (int i = 0; i < cp.size(); i++)
        cout << cp[i].first << " " << cp[i].second << " " << np[i].first << " " << np[i].second << nl;
    return 0;
}