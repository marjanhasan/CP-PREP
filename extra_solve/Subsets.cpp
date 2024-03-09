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

    const int mod = 1e9 + 7;
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (s > sum)
        {
            cout << 0 << nl;
            continue;
        }
        if ((sum + s) % 2 != 0)
        {
            cout << 0 << nl;
            continue;
        }
        int s2 = (sum + s) / 2;
        int dp[s2 + 1];
        for (int i = 0; i <= s2; i++)
            dp[i] = 0;

        dp[0] = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = s2; j >= a[i]; j--)
            {
                dp[j] = (dp[j] + dp[j - a[i]]) % mod;
            }
        }
        cout << dp[s2] << nl;
    }
    return 0;
}