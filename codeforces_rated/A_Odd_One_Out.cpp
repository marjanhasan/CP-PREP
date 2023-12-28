#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)
int main()
{
    FAST;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a != b && a != c)
            cout << a << nl;
        else if (b != a && b != c)
            cout << b << nl;
        else
            cout << c << nl;
    }

    return 0;
}