#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    /* using array

    int a[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    sort(a, a + 3, greater<int>());
    int ans = 0;
    ans += (a[0] - a[1]);
    ans += (a[1] - a[2]);
    cout << ans; */

    /* second way

    int a, b, c;
    cin >> a >> b >> c;
    int mn = min(a, min(b, c));
    int mx = max(a, max(b, c));
    cout << mx - mn;
    */

    // third way
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    int mn = min({a, b, c});
    int mx = max({a, b, c});
    int md = sum - (mn + mx);
    cout << (mx - md) + (md - mn);
    return 0;
}