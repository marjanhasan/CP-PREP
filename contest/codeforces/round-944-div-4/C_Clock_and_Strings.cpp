/*
 * author: saifabrar
 * created: 2024-05-10 20:47:34
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int a,b,c,d;cin>>a>>b>>c>>d;
    int aa = min(a,b),bb = max(a,b), cc = min(c,d),dd=max(c,d);
    if(aa+1 == bb || cc + 1== dd) cout<<"NO"<<nl;
    else if(aa < cc && bb < dd) cout<<"YES"<<nl;
    else if(aa > cc && bb > dd) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;

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