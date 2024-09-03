/*
 * author: marjanhasan
 * created: 2024-09-03 14:37:05
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
  map<char, int> mp;
  mp[s[0]]++;
  for (int i = 1; i < n; i++)
  {
    if (s[i] == s[i - 1])
      continue;
    mp[s[i]]++;
  }
  for (auto val : mp)
  {
    if (val.second > 1)
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