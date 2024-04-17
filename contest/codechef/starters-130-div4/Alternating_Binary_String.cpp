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
    // int cnt=0,cons=1;
    // for(int i=1;i<n;i++)
    // {
    //     if(s[i]==s[i-1]) cnt++;
    //     //     cons++;
    //     // else cons = 1;
    //     // cnt+=cons;
    // }
    int fz = 0; 
    int fo = 0;  

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            if (s[i] != '0')
                ++fz;
        } else {
            if (s[i] != '1')
                ++fz;
        }

        if (i % 2 == 0) {
            if (s[i] != '1')
                ++fo;
        } else {
            if (s[i] != '0')
                ++fo;
        }
    }
    cout<<min(fz,fo)<<nl;
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