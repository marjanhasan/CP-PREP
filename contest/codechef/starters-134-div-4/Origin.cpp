/*
 * author: saifabrar
 * created: 2024-05-15 21:17:45
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll n;cin>>n;
    ll fc = n / 9;
    ll sfc = 45;
    ll rem = n % 9;
    ll sfcs = fc * sfc;
    ll srem = rem * (rem + 1) / 2;
    ll sum = sfcs + srem;
    cout<<sum<<nl;
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