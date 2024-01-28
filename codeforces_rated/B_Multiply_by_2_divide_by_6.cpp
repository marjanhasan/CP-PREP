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
        int cnt = 0;
        while (n != 1 && n > 1)
        {
            if (n % 3 != 0)
                break;
            if (n % 6 == 0)
                n /= 6;
            else
                n *= 2;
            cnt++;
        }
        (n == 1) ? cout << cnt : cout << -1;
        cout << nl;
    }
    return 0;
}