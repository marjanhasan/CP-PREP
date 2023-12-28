#include <bits/stdc++.h>
using namespace std;
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
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int r = sqrt(sum);
        if (r * r != sum)
            cout << "NO" << nl;
        else
            cout << "YES" << nl;
    }
    return 0;
}