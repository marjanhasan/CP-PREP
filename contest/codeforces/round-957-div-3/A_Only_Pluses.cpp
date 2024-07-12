/*
 * author: marjanhasan
 * created: 2024-07-11 20:37:07
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    vector<int> a(3);
    for(int i = 0; i < 3; i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    int cnt = 5;
    while(cnt != 0)
    {
        a[0]++;
        cnt--;
        sort(a.begin(),a.end());
    }
    int ans = 1;
    for(int i = 0; i < 3; i++)
        ans *= a[i];
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