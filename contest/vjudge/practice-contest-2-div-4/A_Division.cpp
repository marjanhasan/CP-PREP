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
        int x;
        cin >> x;
        if (x <= 1399)
            cout << "Division 4";
        else if (x <= 1599)
            cout << "Division 3";
        else if (x <= 1899)
            cout << "Division 2";
        else
            cout << "Division 1";
        cout << nl;
    }
    return 0;
}