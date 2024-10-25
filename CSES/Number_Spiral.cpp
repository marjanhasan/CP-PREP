/*
** author: marjanhasan,
** created: 2024-10-25 15:53:28,
** problem link: ,
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<ll> v;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define nl cout << '\n'
#define psp(x) cout << (x) << ' '
#define pnl(x) cout << (x) << '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define rev(i, a, b) for (int i = (a); i >= (b); i--)

void solve()
{
    ll y, x;
    cin >> y >> x;

    if (y > x) {
      ll ans = (y - 1) * (y - 1);
      ll add = 0;

      if (y % 2 != 0) {
        add = x;
      }
      else {
        add = 2 * y - x;
      }

      pnl(ans + add);
    }
    else {
      ll ans = (x - 1) * (x - 1);
      ll add = 0;

      if (x % 2 == 0) {
        add = y;
      }
      else {
        add = 2 * x - y;
      }
      pnl(ans + add);
    }
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