#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>

const ll N = 1e5 + 5;
ll par[N];
ll group_size[N];

void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
}
ll dsu_find(int n)
{
    if (par[n] == -1)
        return n;
    return par[n] = dsu_find(par[n]);
}
void dsu_union(int na, int nb)
{
    ll la = dsu_find(na);
    ll lb = dsu_find(nb);
    if (group_size[la] > group_size[lb])
    {
        par[lb] = la;
        group_size[la] += group_size[lb];
    }
    else
    {
        par[la] = lb;
        group_size[lb] += group_size[la];
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m;
    cin >> n >> m;
    dsu_initialize(n);
    while (m--)
    {
        ll a, b;
        cin >> a >> b;
        ll la = dsu_find(a);
        ll lb = dsu_find(b);
        if (la != lb)
        {
            dsu_union(la, lb);
        }
    }
    vector<ll> v;
    for (int i = 1; i <= n; i++)
        v.push_back(dsu_find(i));
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << v.size() - 1 << nl;
    for (int i = 0; i < v.size() - 1; i++)
        cout << v[i] << " " << v[i + 1] << nl;
    return 0;
}