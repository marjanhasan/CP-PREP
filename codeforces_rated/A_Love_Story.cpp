/*
 * author: marjanhasan
 * created: 2024-08-27 23:10:52
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    string s;
    cin >> s;
    int cnt = 0;
    string a = "codeforces";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != a[i])
            cnt++;
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