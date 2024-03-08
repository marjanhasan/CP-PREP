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

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1 && s[i] == '0' && s[i + 1] == '1')
                cnt++;
            if (i < n - 1 && s[i] == '1' && s[i + 1] == '0')
                cnt++;
            if (i > 0 && s[i] == '0' && s[i - 1] == '1')
                cnt++;
            if (i > 0 && s[i] == '1' && s[i - 1] == '0')
                cnt++;
        }
        cout << cnt / 2 << nl;
    }
    return 0;
}