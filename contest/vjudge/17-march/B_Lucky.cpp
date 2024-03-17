#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 0, ans = 0;
        for (char c : s)
        {
            if (cnt < 3)
            {
                ans += (c - '0');
                cnt++;
            }
            else
                ans -= (c - '0');
        }
        ans == 0 ? cout << "YES" : cout << "NO";
        cout << nl;
    }
    return 0;
}