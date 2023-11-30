#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;

    int res = a * b * c * d;
    if (res % 100 <= 9)
        cout << '0' << res % 100;
    else
        cout << res % 100;

    return 0;
}
