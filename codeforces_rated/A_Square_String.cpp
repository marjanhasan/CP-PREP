/*
 * author: marjanhasan
 * created: 2024-08-23 15:38:25
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    string s, a, b;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
        a.push_back(s[i]);
    for (int i = n / 2; i < n; i++)
        b.push_back(s[i]);
    cout << (a == b ? "YES" : "NO") << nl;
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