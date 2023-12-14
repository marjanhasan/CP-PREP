#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    int mi, mj;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                mi = i;
                mj = j;
            }
        }
    }
    int res = abs(2 - mi) + abs(2 - mj);
    cout << res;
    return 0;
}
