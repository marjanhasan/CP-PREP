/*
 * author: marjanhasan
 * created: 2024-08-21 19:03:16
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int x;
    cin >> x;
    int cnt = 0;
    int dig = x % 10;
    while (x > 0)
    {
        x /= 10;
        cnt++;
    }
    int a[4] = {1, 2, 3, 4};
    int sum = 0;
    for (int i = 1; i < dig; i++)
    {
        for (int j = 0; j < 4; j++)
            sum += a[j];
    }
    for (int i = 0; i < cnt; i++)
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