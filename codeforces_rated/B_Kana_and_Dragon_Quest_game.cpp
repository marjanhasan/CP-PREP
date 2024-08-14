/*
 * author: marjanhasan
 * created: 2024-08-14 23:37:57
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int x, n, m;
    cin >> x >> n >> m;
    while (x > 0 && n && x / 2 + 10 < x)
    {
        n--;
        x = x / 2 + 10;
    }
    cout << ((x <= m * 10) ? "YES" : "NO") << nl;
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