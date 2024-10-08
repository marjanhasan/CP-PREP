/*
 * author: marjanhasan
 * created: 2024-10-08 11:54:57
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
  ll n, mnc = INT_MAX, mno = INT_MAX, cnt = 0;
  cin >> n;
  vector<ll> c(n), o(n);

  for (int i = 0; i < n; i++)
  {
    cin >> c[i];
    mnc = min(mnc, c[i]);
  }

  for (int i = 0; i < n; i++)
  {
    cin >> o[i];
    mno = min(mno, o[i]);
  }

  for (int i = 0; i < n; i++)
  {
    cnt += max(c[i] - mnc, o[i] - mno);
  }
  cout << cnt << nl;
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