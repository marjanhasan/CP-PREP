#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans = 0;
        ans += a;
        if (b < 3)
            ans++;
        else
            ans += (b / 3);
        if (b % 3 == 1)
            ans += 1;
        if (c <= 3)
            ans += 1;
        else
        {
            ans += (c / 3);
        }
        cout << ans << nl;
    }
    return 0;
}