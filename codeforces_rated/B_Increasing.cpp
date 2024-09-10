/*
 * author: marjanhasan
 * created: 2024-09-10 15:05:38
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
  int n, x;
  cin >> n;

  set<int> s;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    s.insert(x);
  }

  /*
  unordered_set<int> us;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    us.insert(x);
  }
  */
  cout << (n == s.size() ? "YES" : "NO") << nl;
  /*
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());
  cout << (n != v.size() ? "NO" : "YES") << nl;
  */
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