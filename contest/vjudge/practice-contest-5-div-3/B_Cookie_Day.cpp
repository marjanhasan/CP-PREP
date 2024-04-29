/*
 * author: saifabrar
 * created: 2024-04-29 22:41:37
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll ans = LONG_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i] < k) continue;
        ans = min(ans, a[i]%k);
    }
    ans == LONG_MAX ? cout<<-1 : cout<<ans;
    cout<<nl;
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