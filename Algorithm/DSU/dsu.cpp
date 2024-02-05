#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

const int N = 1e5 + 5;
int par[N];

void dsu_initialize(int node)
{
    for (int i = 0; i < node; i++)
        par[i] = -1;
    par[1] = 3;
    par[2] = 3;
}
int find_dsu(int node)
{
    if (par[node] == -1)
        return node;
    return par[node] = find_dsu(par[node]);
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    dsu_initialize(4);
    cout << find_dsu(0) << nl;
    cout << find_dsu(1) << nl;
    cout << find_dsu(2) << nl;
    cout << find_dsu(3) << nl;
    return 0;
}