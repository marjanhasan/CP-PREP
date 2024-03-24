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
        ll n, x;
        cin >> n >> x;
        ll ans = n * x;
        string s = to_string(ans);
        if (s.size() == 5)
        {
            if (s[0] == '0')
                cout << "NO";
            else
                cout << "YES";
        }
        else
            cout << "NO";
        cout << nl;
    }
    return 0;
}