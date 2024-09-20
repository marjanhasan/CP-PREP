/*
 * author: marjanhasan
 * created: 2024-09-20 14:10:41
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
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < n; i++)
  {
    if (a[i] != b[i] && (a[i] == 'R' || b[i] == 'R'))
    {
      cout << "NO" << nl;
      return;
    }
  }
  cout << "YES" << nl;
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