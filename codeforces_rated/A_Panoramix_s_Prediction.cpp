/*
 * author: marjanhasan
 * created: 2024-08-19 19:45:31
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

bool prime(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = n + 1; i <= m; i++)
    {
        if (prime(i))
        {
            cout << ((i == m) ? "YES" : "NO") << nl;
            return 0;
        }
    }
    cout << "NO" << nl;
    return 0;
}