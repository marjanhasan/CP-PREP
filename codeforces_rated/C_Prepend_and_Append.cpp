/*
 * author: marjanhasan
 * created: 2024-09-29 11:04:38
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
  int i = 0, j = n - 1;
  // while (i <= j)
  // {
  //   if ((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0'))
  //   {
  //     i++;
  //     j--;
  //   }
  //   else
  //   {
  //     break;
  //   }
  // }
  while (i <= j && s[i] != s[j])
  {
    i++;
    j--;
  }
  cout << j - i + 1 << nl;
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