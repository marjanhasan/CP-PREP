/*
 * author: saifabrar
 * created: 2024-05-14 21:08:04
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
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]<=2*b[i] && b[i]<=2*a[i]) cnt++;
    }
    cout<<cnt<<nl;
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