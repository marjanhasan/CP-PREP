/*
 * author: saifabrar
 * created: 2024-03-27 20:44:55
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

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;
        // if (n == k)
        //     cout << "No";
        // else if (k >= (n / 2))
        //     cout << "Yes";
        // else
        //     cout << "No";
        // cout << nl;
        // int sum = 0;
        // for (int i = 1; i <= k; i++)
        //     sum += i;
        // sum <= x ? cout << "Yes" : cout << "No";
        ((x - k) > 0) ? cout << "Yes" : cout << "No";
        cout << nl;
    }
    return 0;
}