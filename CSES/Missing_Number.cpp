/*
** author: marjanhasan,
** created: 2024-10-22 21:33:45,
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
    vector<int> v(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      mp[v[i]]++;
    }

    for (int i = 1; i <= n; i++) {
      if (!mp[i]) {
        pnl(i);
        break;
      }
    }
    return 0;
}

/*
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++) {
      if(v[i] + 1 != v[i + 1]) {
        pnl(v[i] + 1);
        return 0;
      }
    }
    if (v[n - 1] + 1 != v[n - 2]) {
      pnl(v[n - 1] + 1);
    }
*/

/*
    for (int i = 1; i <= n; i++) {
      mp[i] = 0;
    }
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      mp[v[i]] = 1;
    }
    for (auto [key, val] : mp) {
      if (val == 0) {
        pnl(key);
      }
    }
*/