/*
 * author: marjanhasan
 * created: 2024-08-30 16:30:13
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    string a, b;
    cin >> a >> b;
    swap(a[0], b[0]);
    cout << a << " " << b << nl;
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