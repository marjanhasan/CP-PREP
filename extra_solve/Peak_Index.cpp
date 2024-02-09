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
        int arr[n];
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            cnt += arr[i];
        }
        ll ans = 0, dif = 0;
        dif += arr[0];
        cnt -= arr[0];
        for (int i = 1; i < n - 1; i++)
        {
            cnt -= arr[i];
            if (cnt - dif == 0)
            {
                ans++;
            }
            dif += arr[i];
        }
        cout << ans << nl;
    }
    return 0;
}