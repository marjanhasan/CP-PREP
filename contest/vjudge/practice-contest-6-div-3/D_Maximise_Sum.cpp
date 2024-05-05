/*
 * author: saifabrar
 * created: 2024-05-05 21:43:07
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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> pre(n),suf(n);
    pre[0]=a[0];
    for(int i=1;i<n;i++)
        pre[i] = max(pre[i-1],a[i]);
    suf[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--)
        suf[i] = max(suf[i+1],a[i]);
    ll sum = a[0] + a[n-1];
    for(int i=1;i<n-1;i++)
    {
        int mx1 = pre[i],mx2= suf[i];
        sum += min(mx1,mx2);
    }
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