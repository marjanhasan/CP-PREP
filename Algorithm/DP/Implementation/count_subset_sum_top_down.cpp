#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int dp[1005][1005];
int count_subset_sum(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return 1;
        else
            return 0;
    }
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        int nibo = count_subset_sum(n - 1, a, s - a[n - 1]);
        int bad = count_subset_sum(n - 1, a, s);
        return dp[n][s] = nibo + bad;
    }
    else
        return dp[n][s] = count_subset_sum(n - 1, a, s);
}
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
    memset(dp, -1, sizeof(dp));
    cout << count_subset_sum(n, a, s);
    return 0;
}