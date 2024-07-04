/*
 * author: marjanhasan
 * created: 2024-07-04 14:09:46
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    map<ll, ll> mp;

    for(int i = 0; i < n; i++)
        cin >> v[i],mp[v[i]]++;
    
    ll ans = INT_MAX;

    for(auto it : mp)
        ans = min(ans, (n - it.second) * it.first);
    
    cout << min(ans, n) << nl;
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