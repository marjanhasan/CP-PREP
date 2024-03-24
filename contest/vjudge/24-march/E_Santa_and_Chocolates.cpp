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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum < k)
            cout << "NO" << nl;
        else if (sum % n == 0)
            cout << "YES" << nl;
        else if (sum % k == 0)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}