#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0, r = n - 1;
    int sumS, sumD;
    sumS = sumD = 0;
    int i = 0;
    while (l <= r)
    {
        if (i % 2 == 0)
        {
            if (a[l] > a[r])
            {
                sumS += a[l];
                l++;
            }
            else
            {
                sumS += a[r];
                r--;
            }
        }
        else
        {
            if (a[l] > a[r])
            {
                sumD += a[l];
                l++;
            }
            else
            {
                sumD += a[r];
                r--;
            }
        }
        i++;
    }
    cout << sumS << " " << sumD;

    return 0;
}
