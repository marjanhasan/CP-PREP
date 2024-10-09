/*
 * author: marjanhasan
 * created: 2024-10-09 17:42:57
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
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  map<int, int> m;
  for (int c : v)
  {
    m[c]++;
  }
  for (auto [key, val] : m)
  {
    if (val >= 3)
    {
      cout << key << endl;
      return;
    }
  }
  cout << -1 << endl;
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