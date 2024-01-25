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
        int x, y;
        cin >> x >> y;

        int gcd = __gcd(x, y);
        int lcm = (x / gcd) * y;

        (lcm > y) ? cout << lcm : cout << y * (y / x);
        cout << nl;
    }
    return 0;
}