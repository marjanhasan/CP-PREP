/*
 * author: marjanhasan
 * created: 2024-10-05 11:49:50
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
  vector<vector<char>> v(8, vector<char>(8));
  string ans = "";
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      cin >> v[i][j];
      if (v[i][j] != '.')
      {
        ans += v[i][j];
      }
    }
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