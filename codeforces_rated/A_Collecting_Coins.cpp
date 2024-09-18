/*
 * author: marjanhasan
 * created: 2024-09-18 13:57:28
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
  int a, b, c, n;
  cin >> a >> b >> c >> n;
  int mx = max({a, b, c});
  n -= (mx - a);
  n -= (mx - b);
  n -= (mx - c);
  cout << (n >= 0 && n % 3 == 0 ? "YES" : "NO") << nl;
  // int sum = a + b + c + n;
  // int tar = sum / 3;
  // cout << (sum % 3 == 0 && a <= tar && b <= tar && c <= tar ? "YES" : "NO") << nl;
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