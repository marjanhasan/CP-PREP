/*
 * author: marjanhasan
 * created: 2024-08-15 16:50:41
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    char arr[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] == 'B')
            {
                int cnt = 0;
                for (int z = 0; z < 8; z++)
                {
                    if (arr[z][j] == 'B')
                        cnt++;
                }
                if (cnt == 8)
                {
                    cout << "B" << nl;
                    return;
                }
            }
            if (arr[i][j] == 'R')
            {
                int cnt = 0;
                for (int z = 0; z < 8; z++)
                {
                    if (arr[i][z] == 'R')
                        cnt++;
                }
                if (cnt == 8)
                {
                    cout << "R" << nl;
                    return;
                }
            }
        }
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}