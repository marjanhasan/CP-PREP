/*
 * author: marjanhasan
 * created: 2024-10-07 12:40:15
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
  int x = 0, y = 0;
  for (char c : s)
  {
    if (c == 'L')
    {
      x--;
    }
    else if (c == 'R')
    {
      x++;
    }
    else if (c == 'U')
    {
      y++;
    }
    else
    {
      y--;
    }
    if (x == 1 && y == 1)
    {
      cout << "YES" << nl;
      return;
    }
  }
  cout << "NO" << nl;
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

/*
  int n;
  cin >> n;
  string s;
  cin >> s;
  map<char, pair<int, int>> mp;
  mp['U'] = {0, 1};
  mp['D'] = {0, -1};
  mp['R'] = {1, 0};
  mp['L'] = {-1, 0};
  pair<int, int> ans;
  bool flag = false;
  for (char c : s)
  {
    ans.first += mp[c].first;
    ans.second += mp[c].second;
    if (ans.first == 1 && ans.second == 1)
    {
      flag = true;
      break;
    }
  }
  cout << (flag ? "YES" : "NO") << nl;
*/