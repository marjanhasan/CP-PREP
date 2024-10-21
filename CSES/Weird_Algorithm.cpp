/*
* author: marjanhasan
* created: 2024-10-21 20:23:52
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    cin >> n;

    while(1) {
      cout << n << " ";
      if (n == 1) {
        break;
      }
      if (n % 2) {
        n = (n * 3) + 1;
      }
      else {
        n /= 2;
      }
    }
    return 0;
}