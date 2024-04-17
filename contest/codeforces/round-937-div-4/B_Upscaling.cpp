/*
 * author: saifabrar
 * created: 2024-03-28 20:51:39
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
        int n;
        cin >> n;
        bool row = true, col = true;
        for (int i = 1; i <= 2 * n; i++)
        {
            if (col)
                row = true;
            else
                row = false;
            for (int j = 1; j <= 2 * n; j++)
            {
                if (row)
                    cout << "#";
                else
                    cout << ".";
                if (j % 2 == 0)
                    row = !row;
            }
            if (i % 2 == 0)
                col = !col;
            cout << nl;
        }
    }
    return 0;
}