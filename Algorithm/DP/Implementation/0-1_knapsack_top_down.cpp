#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>
const int N = 1005;
int weight[N];
int value[N];
int dp[N][N];
int knapsack(int n, int w)
{
    if (n < 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (weight[n] <= w)
    {
        int nibo = knapsack(n - 1, w - weight[n]) + value[n];
        int bad = knapsack(n - 1, w);
        return dp[n][w] = max(nibo, bad);
    }
    else
    {
        int bad = knapsack(n - 1, w);
        return dp[n][w] = bad;
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> weight[i];
    for (int i = 0; i < n; i++)
        cin >> value[i];
    int w;
    cin >> w;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
            dp[i][j] = -1;
    }
    cout << knapsack(n - 1, w);
    return 0;
}