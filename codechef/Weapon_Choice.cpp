#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y1, y2, k;
        cin >> h >> x >> y1 >> y2 >> k;
        int cnt1, cnt2;
        cnt1 = cnt2 = 0;
        float d1 = h;
        float d2 = h;
        if (y1 * k >= h)
        {
            cnt1 += round(d1 / y1);
        }
        else
        {
            cnt1 = k;
            d1 -= (y1 * k);
            cnt1 += round(d1 / y2);
        }
        cnt2 = round(d2 / x);
        cout << min(cnt1, cnt2) << nl;
    }
    return 0;
}