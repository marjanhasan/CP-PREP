/*
 * author: saifabrar
 * created: 2024-04-29 22:49:56
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n,q;
    cin>>n>>q;
    string s;cin>>s;
    vector<int> a;
    int cnt=1,mx=1;
    for(int i=0;i<n-1;i++)
    {
        if(s[i] == s[i+1]) cnt++;
        else cnt = 1;
        mx = max(mx,cnt);
    }
    a.push_back(mx);

    for(int i=n;i<n+q;i++)
    {
        char c; cin>>c;
        s+=c;
        if(s[i] == s[i-1]) cnt++;
        else cnt = 1;
        mx = max(mx,cnt);
        a.push_back(mx);
    }

    for(int v:a)
        cout<<v<<" ";
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