/*
 * author: marjanhasan
 * created: 2024-10-15 11:16:45
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
  vector<int> v(n);
  int o = 0, e = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    o += (v[i] % 2);
  }
  e = n - o;
  if (o % 2)
  {
    cout << "YES" << nl;
  }
  else
  {
    if (e >= 1 && o >= 1)
    {
      cout << "YES" << nl;
    }
    else
    {
      cout << "NO" << nl;
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