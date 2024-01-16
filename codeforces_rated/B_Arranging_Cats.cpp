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
        string s, f;
        cin >> s >> f;
        int up, down;
        up = down = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && f[i] == '0')
                up++;
            if (s[i] == '0' && f[i] == '1')
                down++;
        }
        cout << max(up, down) << nl;
    }
    return 0;
}