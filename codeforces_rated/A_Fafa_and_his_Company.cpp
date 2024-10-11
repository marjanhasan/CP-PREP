/*
 * author: marjanhasan
 * created: 2024-10-11 23:29:41
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int main()
{
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i < n; i++)
  {
    if (n % i == 0)
    {
      ans++;
    }
  }
  cout << ans;
  return 0;
}