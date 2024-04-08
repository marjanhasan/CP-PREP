/*
 * author: saifabrar
 * created: 2024-04-08 20:50:02
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
        int n, c, d;
        cin >> n >> c >> d;
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        }for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout<< a[i][j]<<" ";
            cout<<nl;
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i + 1 < n) && (j + 1 < n) && (a[i][j] + c == a[i + 1][j]) && (a[i][j] + d == a[i][j + 1]))
                {
                    flag = true;
                    break;
                }
            }
        }
        // flag ? cout<<"YES" : cout<<"NO";
        cout<<nl;
    }
    return 0;
}