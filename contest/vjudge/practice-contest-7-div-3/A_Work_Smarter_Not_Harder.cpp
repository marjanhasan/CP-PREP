/*
 * author: saifabrar
 * created: 2024-05-12 21:02:06
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    float l,a,b;cin>>l>>a>>b;
    int cnt = ceil(l/a),cnt2 = ceil(l/b);
    if(cnt - cnt2 == 0) cout<<-1<<nl;
    else if(cnt - cnt2 == 1) cout<<0<<nl;
    else if(cnt - cnt2 >= 2) 
    cout<<cnt-cnt2-1<<nl;
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