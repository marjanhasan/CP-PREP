/*
 * author: saifabrar
 * created: 2024-05-14 21:20:39
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n; 
    cin>>n;
    string s; 
    cin>>s;
    int cnt = 0;
    for(int i = 0; i < n - 1;i++)
    {
        if(s[i] == ':' && s[i + 1] == ')')
        {
            int j = i + 2;
            while(j < n && s[j] == ')')
                j++;
            if(s[j] == ':')
                cnt++;
        }
    }
    cout << cnt << nl;
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