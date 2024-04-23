/*
* author: saifabrar
* created: 2024-04-23 21:02:25
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    int x,n,m;cin>>x>>n>>m;
    (x+m >= n) ? cout<<"YES" : cout<<"NO";
    cout<<nl;
    return 0;
}