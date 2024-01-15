#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int mn, mx;
        int x1, y1;
        cin >> x1 >> y1;
        int x2, y2;
        cin >> x2 >> y2;
        int x3, y3;
        cin >> x3 >> y3;
        int x4, y4;
        cin >> x4 >> y4;
        mn = min({x1, x2, x3, x4});
        mx = max({x1, x2, x3, x4});
        cout << (mx - mn) * (mx - mn) << nl;
    }
    return 0;
}