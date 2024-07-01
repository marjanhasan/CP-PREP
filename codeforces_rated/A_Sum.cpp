/*
 * author: marjanhasan
 * created: 2024-07-01 20:35:59
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    if((a + b == c) || (a + c == b) || (b + c == a)) 
        cout << "YES";
    else
        cout << "NO";
    cout << nl;
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