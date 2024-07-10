/*
* author: marjanhasan
* created: 2024-07-10 11:16:11
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    vector<int> a(n);
    int mx = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i], mx = max(mx, a[i]);
    }

    ll cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cnt += (mx - a[i]);
    }

    cout << cnt << nl;
    return 0;
}