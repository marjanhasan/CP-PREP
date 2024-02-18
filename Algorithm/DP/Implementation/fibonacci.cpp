#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>

const int N = 1e5 + 5;
vector<ll> dp(N, -1);

int fibo(int n)
{
    if (n == 1 || n == 0)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fibo(n - 1) + fibo(n - 2);
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}