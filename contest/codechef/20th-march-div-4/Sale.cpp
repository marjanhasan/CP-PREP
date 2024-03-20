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
        int n;
        cin >> n;
        vector<ll> a(n);
        ll mx = LONG_LONG_MIN, ind;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (mx <= a[i])
            {
                mx = max(mx, a[i]);
                ind = i;
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == ind)
            {
                ans += (a[i] * 2);
                break;
            }
            ans += a[i];
        }
        cout << ans << nl;
    }
    return 0;
}