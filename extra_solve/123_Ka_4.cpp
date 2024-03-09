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

    int n;
    cin >> n;
    for (int j = 1; j <= n; j++)
        cout << j;
    cout << nl;
    if (n == 1)
        return 0;
    for (int i = 2; i < n; i++)
    {
        cout << i;
        for (int j = 2; j < n; j++)
            cout << " ";
        cout << n << nl;
    }
    for (int j = 1; j <= n; j++)
        cout << n;
    cout << nl;
    return 0;
}