/*
 * author: marjanhasan
 * created: 2024-08-18 17:01:57
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    string s;
    cin >> s;
    string a = "abc";
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == a[i])
        {
            cout << "YES" << nl;
            return;
        }
    }
    cout << "NO" << nl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}