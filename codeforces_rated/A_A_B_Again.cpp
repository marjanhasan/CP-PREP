/*
 * author: marjanhasan
 * created: 2024-09-13 15:53:09
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
  int n, sum = 0;
  cin >> n;
  while (n > 0)
  {
    sum += (n % 10);
    n /= 10;
  }
  cout << sum << nl;
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