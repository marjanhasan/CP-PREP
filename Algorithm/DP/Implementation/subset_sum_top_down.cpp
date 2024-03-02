#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int dp[1005][1005];
int subset(int n, int a[], int s)
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
        int nibo = subset(n - 1, a, s - a[n - 1]);
        int bad = subset(n - 1, a, s);
        return dp[n][s] = nibo || bad;
    }
    else
        return dp[n][s] = subset(n - 1, a, s);
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
    subset(n, a, s) ? cout << "YES" : cout << "NO";
    cout << nl;
    return 0;
}