/*
 * author: marjanhasan
 * created: 2024-10-06 09:59:00
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
  int a, b;
  cin >> a >> b;
  cout << min(a, b) << " " << max(a, b) << nl;
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