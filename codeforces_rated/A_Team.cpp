#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int res = 0;
    while (t--)
    {
        int cnt = 0;
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                cnt++;
        }
        if (cnt >= 2)
            res++;
    }
    cout << res;

    return 0;
}
