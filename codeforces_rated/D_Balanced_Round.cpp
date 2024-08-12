/*
 * author: marjanhasan
 * created: 2024-08-12 19:38:20
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int cnt = 1, ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] > k)
            cnt = 1;
        else
            cnt++;
        ans = max(ans, cnt);
    }

    cout << n - ans << nl;
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