/*
 * author: marjanhasan
 * created: 2024-10-10 12:37:26
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
  if (a == b)
  {
    cout << 0 << nl;
  }
  else if (a > b)
  {

    if ((a - b) % 2)
    {
      cout << 2 << nl;
    }
    else
    {
      cout << 1 << nl;
    }
  }
  else
  {
    if ((b - a) % 2)
    {
      cout << 1 << nl;
    }
    else
    {
      cout << 2 << nl;
    }
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