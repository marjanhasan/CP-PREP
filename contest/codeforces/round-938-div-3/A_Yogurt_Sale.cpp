/*
* author: saifabrar
* created: 2024-04-08 20:38:47
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
    
    int t;cin>>t;
    while(t--)
    {
        int n,a,b;cin>>n>>a>>b;

        int an = a * n,bn;
        if(n%2==0) bn = b*(n/2);
        else bn = ((n/2) * b)+a;
        if(an>bn) cout<<bn;
        else cout<<an;
        cout<<nl;
    }
    return 0;
}