/*
 * author: marjanhasan
 * created: 2024-08-22 17:18:54
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
    cin >> n;
    vector<int> a(n);
    // int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // mx = max(mx, a[i]);
        // mn = min(mn, a[i]);
    }
    // cout << mx - mn << nl;
    cout << *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end()) << nl;
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