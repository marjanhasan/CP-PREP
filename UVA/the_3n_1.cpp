#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        int a = x, b = y;
        if (a > b)
            swap(a, b);
        int mx = INT_MIN;
        for (int i = a; i < b; i++)
        {
            int cnt = 0;
            int n = i;
            while (n != 1)
            {
                if (n % 2 == 1)
                    n = (3 * n) + 1;
                else
                    n /= 2;
                cnt++;
            }
            mx = max(mx, cnt);
        }
        cout << x << " " << y << " " << mx << endl;
    }

    return 0;
}
