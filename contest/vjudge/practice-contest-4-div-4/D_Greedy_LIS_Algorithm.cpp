/*
 * author: saifabrar
 * created: 2024-04-23 22:22:05
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n,x;cin>>n>>x;
    
    if(x == 0)
    {
        for(int i=1;i<=n;i++)
            cout<<i<<' ';
        cout<<nl;
        return;
    }
    if(x == n || x == n-1)
    {
        cout<<-1<<nl;
        return;
    }
    for(int i=n;i>=x+2;i--)
        cout<<i<<" ";
    for(int i=1;i<=x+1;i++)
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