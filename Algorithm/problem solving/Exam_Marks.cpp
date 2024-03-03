#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
const int N = 1005;
int dp[N][N];
int subset_sum(int n, int a[], int s)
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
        return dp[n][s] = subset_sum(n - 1, a, s - a[n - 1]) || subset_sum(n - 1, a, s);
    else
        return dp[n][s] = subset_sum(n - 1, a, s);
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
        int n, m;
        cin >> n >> m;
        int s = abs(1000 - m);
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        memset(dp, -1, sizeof(dp));
        subset_sum(n, a, s) ? cout << "YES" : cout << "NO";
        cout << nl;
    }

    return 0;
}