/*
 * author: marjanhasan
 * created: 2024-07-04 13:40:33
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    int ans = INT_MAX;

    for(int i = 0; i <= n - m; i++)
    {
        int cnt = 0;
        for(int j = 0; j < m; j++)
        {
            if(a[i + j] != b[j]) cnt++;
        }
        ans = min(ans, cnt);
    }

    cout << ans << nl;
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