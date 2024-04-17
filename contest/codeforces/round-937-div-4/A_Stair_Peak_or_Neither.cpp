/*
 * author: saifabrar
 * created: 2024-03-28 20:45:43
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
        int a, b, c;
        cin >> a >> b >> c;
        if (b < c)
        {
            if (a < b)
                cout << "STAIR";
            else
                cout << "NONE";
        }
        else if (a < b)
        {
            if (b > c)
                cout << "PEAK";
            else
                cout << "NONE";
        }
        else
            cout << "NONE";
        cout << nl;
    }
    return 0;
}