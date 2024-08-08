/*
 * author: marjanhasan
 * created: 2024-08-08 22:45:27
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
    cout << s[0] << s[1];
    if (s.size() == 2)
    {
        cout << nl;
        return;
    }
    for (int i = 3; i < s.size() - 1; i += 2)
        cout << s[i];
    cout << s[s.size() - 1] << nl;
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