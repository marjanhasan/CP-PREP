#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, w;
    cin >> n >> w;
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
        cin >> weight[i] >> value[i];
    int dp[n + 1][w + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
                continue;
            }
            if (weight[i - 1] <= j)
            {
                int nibo = dp[i - 1][j - weight[i - 1]] + value[i - 1];
                int bad = dp[i - 1][j];
                dp[i][j] = max(nibo, bad);
            }
            else
            {
                int bad = dp[i - 1][j];
                dp[i][j] = bad;
            }
        }
    }
    cout << dp[n][w];
    return 0;
}