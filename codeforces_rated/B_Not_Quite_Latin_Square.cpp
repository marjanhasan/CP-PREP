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
        char a[3][3];
        int x;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '?')
                    x = i;
            }
        }
        int pre[3] = {0};
        if (x == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                if (a[x][i] != '?')
                {
                    pre[a[x][i] - 'A']++;
                }
            }
        }
        else if (x == 1)
        {
            for (int i = 0; i < 3; i++)
            {
                if (a[x][i] != '?')
                {
                    pre[a[x][i] - 'A']++;
                }
            }
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                if (a[x][i] != '?')
                {
                    pre[a[x][i] - 'A']++;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (pre[i] == 0)
            {
                char ans = i + 'A';
                cout << ans << nl;
            }
        }
    }

    return 0;
}