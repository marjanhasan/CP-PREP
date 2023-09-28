#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int e, m, b, ans = 0;
    cin >> e >> m >> b;
    while (true)
    {
        if (e > 0 && m > 0 && b > 0)
        {
            if (e <= m && e <= b)
            {
                ans += e;
                e -= ans;
                m -= ans;
                b -= ans;
            }
            else if (m <= e && m <= b)
            {
                ans += m;
                e -= ans;
                m -= ans;
                b -= ans;
            }
            else
            {
                ans += b;
                e -= ans;
                m -= ans;
                b -= ans;
            }
        }
        else if (e >= 2 && b > 0)
        {
            e /= 2;
            if (e < b)
            {
                ans += e;
                e -= ans;
                b -= ans;
            }
            else
            {
                ans += b;
                e -= ans;
                b -= ans;
            }
        }
        else
            break;
    }
    cout << ans;
    return 0;
}
/*
another way

    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long int e, m, b, res = 0;
        cin >> e >> m >> b;

        if (e == 0 || b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            long long int min = e;
            if (m < min)
                min = m;
            if (b < min)
                min = b;
            e -= min;
            m -= min;
            b -= min;
            res += min;
            if (e / 2 < b)
                res += e / 2;
            else
                res += b;
            cout << res << endl;
        }
        return 0;
    }
*/