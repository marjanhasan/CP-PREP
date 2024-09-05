/*
 * author: marjanhasan
 * created: 2024-09-05 13:30:17
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
  vector<int> v;
  if (n % 2)
  {
    v.push_back(3);
    n -= 3;
  }
  while (n > 0)
  {
    v.push_back(2);
    n -= 2;
  }
  cout << v.size() << nl;
  for (int a : v)
    cout << a << ' ';
  cout << nl;
  return 0;
}