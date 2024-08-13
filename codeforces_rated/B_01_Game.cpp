/*
 * author: marjanhasan
 * created: 2024-08-13 19:35:30
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
    int o = 0, z = 0;
    for (char c : s)
        (c == '0') ? z++ : o++;
    cout << ((min(z, o) % 2 == 1) ? "DA" : "NET") << nl;
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