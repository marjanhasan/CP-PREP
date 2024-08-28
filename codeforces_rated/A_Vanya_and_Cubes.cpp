/*
 * author: marjanhasan
 * created: 2024-08-28 12:54:44
 * problem link:
 */
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

    int i = 1;
    while (n > 0)
    {
        n -= (i * (i + 1)) / 2;
        if (n <= 0)
            break;
        i++;
    }

    cout << (n == 0 ? i : i - 1) << nl;
    return 0;
}