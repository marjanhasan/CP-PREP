#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = 0xFFFFFFFFFFFFFFFLL;
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a1, a2;
        a1 = -INF;
        a2 = INF;
        vector<ll> a3;
        while (n--)
        {
            ll a, k;
            cin >> a >> k;
            if (a == 1)
                a1 = max(a1, k);
            else if (a == 2)
                a2 = min(a2, k);
            else if (a == 3)
                a3.push_back(k);
        }
        ll cnt = 0;
        if (a1 < a2)
        {
            cnt = a2 - a1 + 1;
            for (ll x : a3)
                cnt -= (x >= a1 && x <= a2);
        }
        cout << cnt << nl;
    }
    return 0;
}