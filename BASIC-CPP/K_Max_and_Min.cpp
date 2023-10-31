#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mn, mx;
    if (a >= b && a >= c)
    {
        mx = a;
        if (b > c)
        {
            mn = c;
            cout << mn << " " << mx;
        }
        else
        {
            mn = b;
            cout << mn << " " << mx;
        }
    }
    else if (b >= a && b >= c)
    {
        mx = b;
        if (a > c)
        {
            mn = c;
            cout << mn << " " << mx;
        }
        else
        {
            mn = a;
            cout << mn << " " << mx;
        }
    }
    else
    {
        mx = c;
        if (a > b)
        {
            mn = b;
            cout << mn << " " << mx;
        }
        else
        {
            mn = a;
            cout << mn << " " << mx;
        }
    }
    return 0;
}
