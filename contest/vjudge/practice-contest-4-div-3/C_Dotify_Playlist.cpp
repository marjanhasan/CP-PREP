/*
 * author: saifabrar
 * created: 2024-04-23 21:14:23
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, k, l;
    cin >> n >> k >> l;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (y == l)
            a.push_back(x);
    }
    sort(a.begin(), a.end(), greater<int>());
    if (a.size() < k)
    {
        cout << -1 << nl;
        return;
    }
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += a[i];
    cout << sum << nl;
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