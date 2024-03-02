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

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int s;
    cin >> s;
    bool dp[n + 1][s + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (i == 0 && j == 0)
            {
                dp[i][j] = true;
                continue;
            }
            if (i == 0 && j > 0 && j <= s)
            {
                dp[i][j] = false;
                continue;
            }
            if (a[i - 1] <= j)
            {
                int nibo = dp[i - 1][j - a[i - 1]];
                int bad = dp[i - 1][j];
                dp[i][j] = nibo || bad;
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    dp[n][s] ? cout << "YES" : cout << "NO";
    cout << nl;
    return 0;
}