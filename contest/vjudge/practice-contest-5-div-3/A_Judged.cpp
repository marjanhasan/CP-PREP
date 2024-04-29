/*
 * author: saifabrar
 * created: 2024-04-29 22:36:08
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int sum=0;
    for(int i=1;i<=5;i++)
    {
        int x;cin>>x;
        sum += x;
    }
    if(sum>=4) cout<<"YES";
    else cout<<"NO";
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