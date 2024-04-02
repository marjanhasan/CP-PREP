/*
 * author: saifabrar
 * created: 2024-04-02 23:00:28
 * problem link:
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
        vector<char> s(n);
        int in;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            if (i <= n - 2 && s[i] == '1')
                in = i;
            ans += s[i];
        }
        ans[in] = '0';
        cout << ans << nl;
    }
    return 0;
}