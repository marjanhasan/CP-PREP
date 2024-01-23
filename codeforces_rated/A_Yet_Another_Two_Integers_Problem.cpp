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
        int a, b;
        cin >> a >> b;
        if (a > b || a < b)
        {
            int cnt = abs(a - b) / 10;
            int res = abs(a - b) % 10;
            cnt += (res > 0);
            cout << cnt << nl;
        }
        else
            cout << 0 << nl;
    }
    return 0;
}