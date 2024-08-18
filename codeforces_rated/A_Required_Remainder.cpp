/*
 * author: marjanhasan
 * created: 2024-08-18 16:58:03
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int x, y, n;
    cin >> x >> y >> n;
    cout << ((n - n % x + y <= n) ? n - n % x + y : n - n % x - (x - y)) << nl;
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