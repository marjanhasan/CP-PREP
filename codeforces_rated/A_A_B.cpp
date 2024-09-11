/*
 * author: marjanhasan
 * created: 2024-09-11 11:05:25
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
  int ans = 0;
  for (char c : s)
  {
    if (c == '+')
      continue;
    int num = c - '0';
    ans += num;
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