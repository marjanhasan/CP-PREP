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
        ll n, f, a, b;
        cin >> n >> f;
        cin >> a >> b;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll diff, on;
        diff = arr[0];
        on = (diff * a);
        f -= min(on, b);
        for (int i = 1; i < n; i++)
        {
            diff = arr[i] - arr[i - 1];
            on = (diff * a);
            f -= min(on, b);
        }
        /* if (arr[0] * a <= b)
            f -= (arr[0] * a);
        else
            f -= b;
        for (int i = 1; i < n; i++)
        {
            if ((arr[i] - arr[i - 1]) * a <= b)
                f -= ((arr[i] - arr[i - 1]) * a);
            else
                f -= b;
        } */
        (f > 0) ? cout << "YES" : cout << "NO";
        cout << nl;
    }
    return 0;
}