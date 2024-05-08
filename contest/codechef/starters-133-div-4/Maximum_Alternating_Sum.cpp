/*
 * author: saifabrar
 * created: 2024-05-08 20:33:55
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
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    ll sum = 0;
    int l=0,r=n-1;
    while(l<r)
    {
        sum+=(a[r]-a[l]);
        r--,l++;
    }
    if(n%2==1) sum+=a[r];
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