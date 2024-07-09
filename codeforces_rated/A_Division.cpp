/*
 * author: marjanhasan
 * created: 2024-07-09 11:46:39
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

    if(n >= 1900)
        cout << "Division 1" << nl;
    else if(n >= 1600)
        cout << "Division 2" << nl;
    else if(n >= 1400)
        cout << "Division 3" << nl;
    else
        cout << "Division 4" << nl;
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