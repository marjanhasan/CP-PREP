/*
 * author: saifabrar
 * created: 2024-05-29 20:48:41
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n % 2 == 0) cout << n * (n - 1) << nl;
    else cout << n * (n - 1) + 1 << nl;
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