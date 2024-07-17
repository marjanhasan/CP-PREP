/*
 * author: marjanhasan
 * created: 2024-07-17 12:23:38
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;
    cin >> n;
    int i = 0;
    while(n--)
    {
        i++;
        while((i % 3 == 0) || (i % 10 == 3))
            i++;
    }
    cout << i << nl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}