/*
 * author: marjanhasan
 * created: 2024-09-17 13:59:45
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
  cout << (n & 1 ? "Ehab" : "Mahmoud") << nl;
  return 0;
}