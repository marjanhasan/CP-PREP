/*
 * author: saifabrar
 * created: 2024-03-25 00:50:06
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

    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll l = 0, r = 0, cnt = 0, sum = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum >= s)
        {
            while (l < r && sum >= s)
            {
                cnt++;
                sum -= a[l];
                l++;
            }
        }
        else
            r++;
    }
    cout << cnt;
    return 0;
}