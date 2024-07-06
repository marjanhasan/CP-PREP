/*
 * author: marjanhasan
 * created: 2024-07-06 13:08:32
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    vector<int> a(4);
    for(int i = 0; i < 4; i++)
        cin >> a[i];
    int cnt = 0;
    for(int i = 1; i < 4; i++)
    {
        if(a[0] < a[i]) cnt++;
    }
    cout << cnt << nl;
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