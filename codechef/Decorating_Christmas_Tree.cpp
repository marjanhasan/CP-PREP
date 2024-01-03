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
        int n, x, y;
        cin >> n >> x >> y;
        if (n > x)
        {
            cout << "NO\n";
        }
        else
        {
            x += (y / 3);
            if (n * 2 <= x)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}