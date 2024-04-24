/*
 * author: saifabrar
 * created: 2024-04-24 22:15:11
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll s1=1,s2=0;
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;i++)
    {
        s1 *= a[i];
        s2 += a[i];
    }
    cout<<max(s2,s1)<<nl;
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