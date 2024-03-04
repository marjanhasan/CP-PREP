#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int dp[1005][1005];
int unbounded_knapsack(int n, int w[], int val[], int s)
{
    if (n == 0 || s == 0)
        return 0;
    if (dp[n][s] != -1)
        return dp[n][s];
    if (w[n - 1] <= s)
    {
        int nibo = val[n - 1] + unbounded_knapsack(n, w, val, s - w[n - 1]);
        int bad = unbounded_knapsack(n - 1, w, val, s);
        return dp[n][s] = max(nibo, bad);
    }
    else
        return dp[n][s] = unbounded_knapsack(n - 1, w, val, s);
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, w;
    cin >> n, w;
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
        cin >> value[i];
    for (int i = 0; i < n; i++)
        cin >> weight[i];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
            dp[i][j] = -1;
    }
    cout << unbounded_knapsack(n, weight, value, w) << nl;
    return 0;
}