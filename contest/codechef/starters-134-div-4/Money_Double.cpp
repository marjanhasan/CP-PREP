/*
 * author: saifabrar
 * created: 2024-05-15 20:32:33
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll x, y; cin>>x>>y;
    for(int i=1;i<=y;i++)
    {
        x = max(x+1000,x*2);
    }
    cout<<x<<nl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}