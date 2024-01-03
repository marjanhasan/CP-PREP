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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        int sum = a[0] + b[0];
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] + b[i] != sum)
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << nl;
            continue;
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << nl;
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << nl;
    }
    return 0;
}