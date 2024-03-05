#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int dp[1005][1005];
int unbounded_knapcsack(int n, int s, int weight[], int value[])
{
    if (n == 0 || s == 0)
        return 0;
    if (dp[n][s] != -1)
        return dp[n][s];
    if (weight[n - 1] <= s)
    {
        int nibo = unbounded_knapcsack(n, s - weight[n - 1], weight, value) + value[n - 1];
        int bad = unbounded_knapcsack(n - 1, s, weight, value);
        return max(nibo, bad);
    }
    else
        return unbounded_knapcsack(n - 1, s, weight, value);
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, s;
    cin >> n >> s;
    int value[n], weight[n];
    for (int i = 0; i < n; i++)
        cin >> value[i];
    for (int i = 0; i < n; i++)
        cin >> weight[i];
    memset(dp, -1, sizeof(dp));
    cout << unbounded_knapcsack(n, s, weight, value) << nl;
    return 0;
}