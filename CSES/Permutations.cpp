/*
** author: marjanhasan,
** created: 2024-10-24 18:12:20,
** problem link: ,
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<ll> v;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define nl cout << '\n'
#define psp(x) cout << (x) << ' '
#define pnl(x) cout << (x) << '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define rev(i, a, b) for (int i = (a); i >= (b); i--)

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if (n == 2 || n == 3) {
      pnl("NO SOLUTION");
      return 0;
    }

    for (int i = 2; i <= n; i += 2) {
      psp(i);
    }
    for (int i = 1; i <= n; i += 2) {
      psp(i);
    }
    return 0;
}