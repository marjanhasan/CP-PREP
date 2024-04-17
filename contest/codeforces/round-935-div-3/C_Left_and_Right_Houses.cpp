/*
 * author: saifabrar
 * created: 2024-04-13 07:58:55
 * problem link: https://codeforces.com/contest/1945/problem/C
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
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
        string s;
        cin >> s;
        vector<int> pre(n + 1), suf(n + 2);
        for (int i = 1; i <= n; i++)
            pre[i] = pre[i - 1] + (s[i - 1] - '0');
        for (int i = n; i >= 1; i--)
            suf[i] = suf[i + 1] + (s[i - 1] - '0');

        double mid = (n / 2.0), dif, mn = INT_MAX, ans;
        for (int i = 1; i <= n; i++)
        {
            int zero = i - pre[i], one = suf[i + 1], left = ceil(i * 1.0 / 2), right = ceil((n - i) * 1.0 / 2);
            if (zero >= left && one >= right)
            {
                dif = abs(mid - i);
                if (dif < mn)
                {
                    mn = dif;
                    ans = i;
                }
            }
        }
        int one = pre[n], half = ceil(n * 1.0 / 2);
        if (mid <= mn && one >= half)
            ans = 0;
        cout << ans << nl;
    }
    return 0;
}