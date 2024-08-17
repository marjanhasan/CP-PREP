/*
 * author: marjanhasan
 * created: 2024-08-17 12:53:26
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i];
    sort(v.rbegin(), v.rend());
    cout << (v[0] + v[1] >= 10 ? "YES" : "NO") << nl;
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