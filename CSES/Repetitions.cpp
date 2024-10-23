/*
** author: marjanhasan,
** created: 2024-10-23 10:31:07,
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

    string s;
    cin >> s;
    int ans = 0, rep = 0;
    rep(i, 1, s.size()) {
      if (s[i] == s[i - 1]) {
        rep++;
      }
      else {
        ans = max(ans, ++rep);
        rep = 0;
      }
    }
    ans = max(ans, ++rep);
    pnl(ans);
    return 0;
}