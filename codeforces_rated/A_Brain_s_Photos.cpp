/*
 * author: marjanhasan
 * created: 2024-09-04 16:07:37
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

  int n, m;
  cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> v[i][j];
      if (v[i][j] == 'C' || v[i][j] == 'M' || v[i][j] == 'Y')
        flag = true;
    }
  }
  cout << (flag ? "#Color" : "#Black&White") << nl;
  return 0;
}