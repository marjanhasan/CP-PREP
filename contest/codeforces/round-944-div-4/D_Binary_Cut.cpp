/*
 * author: saifabrar
 * created: 2024-05-10 21:17:47
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    string s;cin>>s;
    int cnt=0,ans=0;
    for(char c:s)
    {
        if(c == '1')
        {
            cnt++;
            continue;
        }
        ans+=cnt;
        cnt=0;
    }
    if(ans==0) cout<<1<<nl;
    else if(ans==1) cout<<2<<nl;
    else
    cout<<ans<<nl;
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