/*
 * author: marjanhasan
 * created: 2024-10-14 12:26:07
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
  ll w, h, n;
  cin >> w >> h >> n;
  ll res = 1;
  while ((h % 2) == 0)
  {
    res *= 2;
    h /= 2;
  }
  while ((w % 2) == 0)
  {
    res *= 2;
    w /= 2;
  }

  cout << (res >= n ? "YES" : "NO") << nl;
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