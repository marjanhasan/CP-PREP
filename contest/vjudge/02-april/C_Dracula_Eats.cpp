/*
 * author: saifabrar
 * created: 2024-04-02 22:38:06
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
        int n;
        cin >> n;
        int ans = n / 7;
        if (n % 7 >= 2)
            cout << ans + 1;
        else
            cout << ans;
        cout << nl;
    }
    return 0;
}