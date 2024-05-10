/*
 * author: saifabrar
 * created: 2024-05-10 20:38:22
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
    set<char>st;
    for(char c:s)
        st.insert(c);
    if(st.size() == 1) cout<<"NO"<<nl;
    else
    {
        cout<<"YES"<<nl;
        for(int i=1;i<s.size();i++)
            cout<<s[i];
        cout<<s[0]<<nl;
    }
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