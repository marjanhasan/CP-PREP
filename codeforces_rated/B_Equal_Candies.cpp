/*
 * author: marjanhasan
 * created: 2024-09-07 15:21:42
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
  int n, mn = INT_MAX, ans = 0;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    mn = min(mn, v[i]);
  }
  for (int i = 0; i < n; i++)
  {
    ans += (v[i] - mn);
  }
  cout << ans << nl;
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