#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char a;
    cin >> a;
    string s;
    cin >> s;
    string x, y, z;
    x = "qwertyuiop";
    y = "asdfghjkl;";
    z = "zxcvbnm,./";
    for (char c : s)
    {
        for (int i = 0; i < x.size(); i++)
        {
            if (c == x[i])
            {
                if (a == 'R')
                    cout << x[i - 1];
                else
                    cout << x[i + 1];
            }
        }
        for (int i = 0; i < y.size(); i++)
        {
            if (c == y[i])
            {
                if (a == 'R')
                    cout << y[i - 1];
                else
                    cout << y[i + 1];
            }
        }
        for (int i = 0; i < z.size(); i++)
        {
            if (c == z[i])
            {
                if (a == 'R')
                    cout << z[i - 1];
                else
                    cout << z[i + 1];
            }
        }
    }
    return 0;
}