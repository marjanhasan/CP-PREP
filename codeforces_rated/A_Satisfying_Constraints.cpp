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
        int n;
        cin >> n;
        int mx = INT_MIN;
        int mn = INT_MAX;
        vector<int> v;
        while (n--)
        {
            int a, x;
            cin >> a >> x;
            if (a == 1)
                mx = max(mx, x);
            else if (a == 2)
                mn = min(mn, x);
            else
                v.push_back(x);
        }
        int cnt = (mn - mx) + 1;
        for (int d : v)
            cnt -= (mx <= d && mn >= d);
        cnt < 0 ? cout << 0 << nl : cout << cnt << nl;
    }
    return 0;
}