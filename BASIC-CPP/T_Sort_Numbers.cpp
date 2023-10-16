#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mx, mn, md;
    if (a >= b && a >= c)
    {
        mx = a;
        if (b >= c)
        {
            mn = c;
            md = b;
        }
        else
        {
            mn = b;
            md = c;
        }
    }
    else if (b >= a && b >= c)
    {
        mx = b;
        if (a >= c)
        {
            mn = c;
            md = a;
        }
        else
        {
            mn = a;
            md = c;
        }
    }
    else
    {
        mx = c;
        if (a >= b)
        {
            mn = b;
            md = a;
        }
        else
        {
            mn = a;
            md = b;
        }
    }
    cout << mn << endl
         << md << endl
         << mx << endl
         << endl;
    cout << a << endl
         << b << endl
         << c;
    return 0;
}
