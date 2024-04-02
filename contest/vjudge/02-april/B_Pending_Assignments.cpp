/*
 * author: saifabrar
 * created: 2024-04-02 22:32:35
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
        int x, y, z;
        cin >> x >> y >> z;

        int w = x * y;
        int d = z * 24 * 60;
        if (w <= d)
            cout << "YES";
        else
            cout << "NO";
        cout << nl;
    }
    return 0;
}