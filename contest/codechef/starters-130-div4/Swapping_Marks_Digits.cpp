/*
 * author: saifabrar
 * created: 2024-04-17 20:32:19",
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    string a, b;
    cin >> a >> b;
    int oa = stoi(a);
    int ob = stoi(b);
    if (oa > ob)
        cout << "Yes"<<nl;
    else
    {
        string x = "", y = "";
        x += a[1], x += a[0];
        y += b[1], y += b[0];
        int ra = stoi(x);
        int rb = stoi(y);
        if (ra > ob || oa > rb || ra > rb)
            cout << "Yes" << nl;
        else
            cout << "No"<<nl;
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}