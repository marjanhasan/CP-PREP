/*
 * author: marjanhasan
 * created: 2024-10-04 11:13:46
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
  int cnt = 0;
  // 1 - 10 then 1 * 10 + 1 means 11 to 19 then 11 * 10 + 1 means 111 then 1111
  for (int pw = 1; pw <= n; pw = pw * 10 + 1)
  {
    // 1 to 9 for digits
    for (int d = 1; d <= 9; d++)
    {
      if (pw * d <= n)
      {
        cnt++;
      }
    }
  }
  cout << cnt << nl;
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