/*
 * author: marjanhasan
 * created: 2024-07-30 15:56:16
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    string s = "codeforces";
    // sort(s.begin(),s.end());
    // s.erase(unique(s.begin(), s.end()), s.end());
    char c;
    cin >> c;
    for(char ch:s)
    {
        if(ch == c)
        {
            cout << "YES" << nl;
            return;
        }
    }
    cout << "NO" << nl;
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