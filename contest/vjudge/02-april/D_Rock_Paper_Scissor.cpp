/*
 * author: saifabrar
 * created: 2024-04-02 22:43:02
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
        string a, b;
        cin >> a >> b;
        int ca = 0, cb = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (a[i] == 'R' && b[i] == 'S')
                    ca++;
                else if (a[i] == 'S' && b[i] == 'P')
                    ca++;
                else if (a[i] == 'P' && b[i] == 'R')
                    ca++;
                else if (a[i] == 'S' && b[i] == 'R')
                    cb++;
                else if (a[i] == 'P' && b[i] == 'S')
                    cb++;
                else if (a[i] == 'R' && b[i] == 'P')
                    cb++;
            }
        }
        if (cb >= ca)
        {
            cout << (((ca + cb) / 2) + 1) - ca;
        }
        else
            cout << 0;
        cout << nl;
    }
    return 0;
}