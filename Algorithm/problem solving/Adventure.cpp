#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int dp[1005][1005];
int knapsack(int n, int w[], int v[], int s)
{
    if (n == 0 || s == 0)
        return 0;
    if (dp[n][s] != -1)
        return dp[n][s];
    if (w[n - 1] <= s)
    {
        int nibo = knapsack(n - 1, w, v, s - w[n - 1]) + v[n - 1];
        int bad = knapsack(n - 1, w, v, s);
        return dp[n][s] = max(nibo, bad);
    }
    else
        return dp[n][s] = knapsack(n - 1, w, v, s);
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int w[n], v[n];
        for (int i = 0; i < n; i++)
            cin >> w[i];
        for (int i = 0; i < n; i++)
            cin >> v[i];
        memset(dp, -1, sizeof(dp));
        cout << knapsack(n, w, v, s) << nl;
    }
    return 0;
}