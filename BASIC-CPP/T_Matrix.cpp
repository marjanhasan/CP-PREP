#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n], d1 = 0, d2 = 0, x = 0, y = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i == j)
                d1 += arr[i][j];
            /* another way(Bangla Style)
            if (i == x && j == y)
            {
                d2 += arr[i][j];
                x++;
                y--;
            } */
            if (n - 1 - j == i)
                d2 += arr[i][j];
        }
    }
    cout << abs(d1 - d2);
    return 0;
}
