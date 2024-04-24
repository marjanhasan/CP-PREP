/*
 * author: saifabrar
 * created: 2024-04-24 20:58:10
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n,k;cin>>n>>k;
    vector<ll>a(n);
    ll mn = LONG_MAX,mx=LONG_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx = max(a[i],mx);
        mn = min(a[i],mn);
    }
    if(k==1)
    {
        cout<<0<<nl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i] == mx) continue;
        if(a[i]+k==mx)
        {
            *&a[i] = mx;
            continue;
        }
        ll dif = mx - a[i];
        if(dif % k == 0) 
        {
            *&a[i] = mx;
            continue;
        }
        ll diff = (ceil(dif * 1.0 / k) * k)+a[i] ;
        if(diff - a[i] > k)
            *&a[i] = (ceil(dif * 1.0 / k) * k)+a[i] ;
    }
    
    mn = LONG_MAX,mx=LONG_MIN;
    for(int i=0;i<n;i++)
    {
        mx = max(mx,a[i]);
        mn = min(mn,a[i]);
    }
    cout<<mx-mn<<nl;
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