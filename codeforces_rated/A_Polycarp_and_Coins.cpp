/*
 * author: marjanhasan
 * created: 2024-08-24 12:07:11
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
/*
(n % 3 == 0)
c1 = n / 3;
c2 = (n / 3) * 2;

(n % 3 == 1)
c1 = (n / 3) + 1;
c2 = (n / 3) * 2;

(n % 3 == 2)
c1 = (n / 3);
c2 = ((n / 3) * 2) + 1;
*/

void solve()
{
    int n;
    cin >> n;
    if (n % 3 == 0)
        cout << n / 3 << " " << n / 3 << nl;
    else if (n % 3 == 1)
        cout << (n / 3) + 1 << " " << n / 3 << nl;
    else if (n % 3 == 2)
        cout << n / 3 << " " << (n / 3) + 1 << nl;
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