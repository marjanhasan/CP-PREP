/*
 * author: saifabrar
 * created: 2024-05-12 21:18:56
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n,m;cin>>n>>m;
    string s,k;cin>>s>>k;
    int cnt=0,ans=INT_MAX;
    for(int i=0;i<n-m+1;i++)
    {
        cnt=0;
        for(int j=0;j<m;j++)
        {
            int x=abs(s[i+j]-k[j]);
            if(x>5)
                x=10-x;
            cnt+=x;
        }
        ans=min(ans,cnt);
    }
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