#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int z = 0, a = 1, b = n;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= z)
                cout << '0';
            else if (j == a)
                cout << '*';
            else if (j < b)
                cout << '7';
            else if (j == b)
                cout << '*';
            else
                cout << '7';
        }
        cout << nl;
        a++;
        b--;
        z++;
    }
    int sz;
    if (n % 2 == 0)
        sz = n / 2;
    else
        sz = (n / 2) + 1;
    for (int i = 1; i <= sz; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j < a)
                cout << '0';
            else if (j == a)
                cout << '*';
            else if (j < b)
                cout << '0';
            else if (j == b)
                cout << '*';
            else
                cout << '7';
        }
        a--;
        b++;
        cout << nl;
    }
    return 0;
}