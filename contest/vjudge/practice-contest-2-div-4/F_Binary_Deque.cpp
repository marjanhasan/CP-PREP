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
        int n, s;
        cin >> n >> s;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                sum++;
        }
        if (sum < s)
            cout << -1 << nl;
        else
        {
            int i = 0, j = n - 1;
            int ans = 0;
            while (i < j && sum != s)
            {
                if (a[i] == 1 && sum - a[i] >= s)
                {
                    sum -= a[i];
                    ans++;
                    i++;
                }
                else if (a[j] == 1 && sum - a[j] >= s)
                {
                    sum -= a[i];
                    ans++;
                    j--;
                }
                else if (a[i] == 0)
                {
                    i++;
                    ans++;
                }
                else if (a[j] == 0)
                {
                    j--;
                    ans++;
                }
            }
            sum > s ? cout << -1 : cout << ans;
            cout << nl;
        }
    }
    return 0;
}