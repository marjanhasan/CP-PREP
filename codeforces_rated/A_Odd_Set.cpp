/*
 * author: marjanhasan
 * created: 2024-10-02 10:49:31
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
  int n, even = 0, odd = 0;
  cin >> n;
  vector<int> v(2 * n);
  for (int i = 0; i < 2 * n; i++)
  {
    cin >> v[i];
    v[i] % 2 == 1 ? odd++ : even++;
  }
  // cout << odd << " " << even << nl;
  cout << (odd == even ? "Yes" : "No") << nl;
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