/*
 * author: marjanhasan
 * created: 2024-04-01 00:22:50
 * problem link:
 */
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
        int n;
        cin >> n;
        string s;
        cin >> s;

        ll sum = 0, cnt = 0;
        vector<ll> v;

        for (int i = 0; i < n; i++)
        {
            ll l = i, r = n - i - 1;

            if (s[i] == 'L')
            {
                if (r > l)
                {
                    cnt++;
                    sum += r;
                    v.push_back(r - l);
                }
                else
                    sum += l;
            }
            else
            {
                if (l > r)
                {
                    cnt++;
                    sum += l;
                    v.push_back(l - r);
                }
                else
                    sum += r;
            }
        }

        vector<ll> ans(n + 1);

        for (int i = cnt; i <= n; i++)
            ans[i] = sum;

        sort(v.begin(), v.end(), greater<ll>());

        for (int i = cnt - 1; i >= 0; i--)
        {
            sum -= v.back();
            ans[i] = sum;
            v.pop_back();
        }

        for (int i = 1; i <= n; i++)
            cout << ans[i] << ' ';
        cout << nl;
    }
    return 0;
}