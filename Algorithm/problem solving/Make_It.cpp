#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
const int N = 1e5 + 5;
int dp[N];
bool make(int n, int v)
{
    if (n == v)
        return true;
    if (n < v)
        return false;
    if (dp[v] != -1)
        return dp[v];
    return dp[v] = make(n, v + 3) || make(n, v * 2);
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
        int n;
        cin >> n;
        memset(dp, -1, sizeof(dp));
        make(n, 1) ? cout << "YES" : cout << "NO";
        cout << nl;
    }
    return 0;
}