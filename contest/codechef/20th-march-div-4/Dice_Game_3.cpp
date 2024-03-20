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
        int ans = 0;
        if (n % 2 == 0)
        {
            /* for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 1)
                {
                    ans += 1;
                }
                else
                    ans += (2 * 6);
            } */
            ans += (n / 2);
            ans += ((n / 2) * (2 * 6));
            cout << ans << nl;
        }
        else
        {
            /* for (int i = 1; i < n; i++)
            {
                if (i % 2 == 1)
                    ans += 1;
                else
                    ans += (2 * 6);
            } */
            ans += (n / 2);
            ans += ((n / 2) * (2 * 6));
            ans += 6;
            cout << ans << nl;
        }
    }
    return 0;
}