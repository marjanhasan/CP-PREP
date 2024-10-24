/*
** author: marjanhasan,
** created: 2024-10-24 17:59:10,
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
    v arr(n);
    ll cnt = 0, diff;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (i != 0 && arr[i - 1] > arr[i]) {
        diff = arr[i - 1] - arr[i];
        cnt += diff;
        arr[i] += diff;
      }
    }
    pnl(cnt);
    return 0;
}