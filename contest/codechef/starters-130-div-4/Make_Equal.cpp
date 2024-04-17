/*
 * author: saifabrar
 * created: 2024-04-17 21:14:16",
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
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    ll l=a[0],r=a[n-1];
    if(l==r)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]<l)
            {
                cout<<"NO"<<nl;
                return;
            }
        }
        cout<<"YES";
    }
    else
    cout<<"NO";
    cout<<nl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}