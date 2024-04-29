/*
 * author: saifabrar
 * created: 2024-04-29 23:05:02
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
    for(int i=1;i<=k;i++)
        cout<<i<<" ";
    for(int i=k+2;i<=n;i+=2)
        cout<<i<<" ";
    for(int i=k+1;i<=n;i+=2)
        cout<<i<<" ";
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