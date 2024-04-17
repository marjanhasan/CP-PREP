/*
 * author: saifabrar
 * created: 2024-04-17 21:25:29",
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1]) cnt++;
    }
    cout<<cnt<<nl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}