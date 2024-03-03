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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = 0, j = n - 1;
        int ai = INT_MIN, aj = INT_MIN;
        int x, y;
        while (i < j)
        {
            if (a[i] > ai)
            {
                ai = a[i];
                x = i;
            }
            if (a[j] > aj)
            {
                aj = a[j];
                y = j;
            }
            i++;
            j--;
        }
        if (a[j] > aj)
        {
            aj = a[j];
            y = j;
        }
        cout << x << " " << y << nl;
    }
    return 0;
}