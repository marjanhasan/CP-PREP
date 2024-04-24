/*
 * author: saifabrar
 * created: 2024-04-24 20:38:55
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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll sum = 0;
    for(int i=0;i<n;i++)
    {
        if(k!=0 && a[i] <= 3)
        {
        if(a[i] == 1) sum+=6;
        else if(a[i] == 2) sum+=5;
        else if(a[i] == 3) sum+=4;
        k--;
        }
        else sum+=a[i];
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