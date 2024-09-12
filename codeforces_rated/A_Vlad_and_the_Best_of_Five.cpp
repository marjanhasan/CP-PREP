/*
 * author: marjanhasan
 * created: 2024-09-12 21:31:22
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
  string s;
  cin >> s;
  int a = 0;
  for (char c : s)
  {
    if (c == 'A')
      a++;
  }
  if (a > s.size() - a)
    cout << "A" << nl;
  else
    cout << "B" << nl;
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