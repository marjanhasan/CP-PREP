/*
 * author: saifabrar
 * created: 2024-05-15 20:39:50
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll n;cin>>n;
    string s;cin>>s;
    if(n==1)
    {
        cout<<1<<nl;
        return;
    }
    string ans = "";
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'S') 
        {
            if(ans.empty() || ans[i-1] != 'R') ans+='R';
            else if(ans[i-1] == 'R') ans+='L';
        }
        else if(s[i] == 'R') 
        {
            if(ans.empty() || ans[i-1] != 'P') ans+='P';
            else if(ans[i-1] == 'P') ans+='L';
        }
        else if(s[i]== 'P') 
        {
            if(ans.empty() || ans[i-1] != 'S') ans+='S';
            else if(ans[i-1] == 'S') ans+='L';
        }
    }
    ll cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(ans[i] != 'L')
        cnt++;
    }
    cout<<cnt<<nl;
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