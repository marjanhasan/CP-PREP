#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>
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

    int n, e, cnt = 0;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int la = dsu_find(a);
        int lb = dsu_find(b);
        if (la == lb)
            cnt++;
        else
            dsu_union(a, b);
    }
    cout << cnt;
    return 0;
}