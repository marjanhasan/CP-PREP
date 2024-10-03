/*
 * author: marjanhasan
 * created: 2024-10-03 11:28:01
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
  sort(s.rbegin(), s.rend());
  cout << (int)(s[0] - 'a') + 1 << nl;
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