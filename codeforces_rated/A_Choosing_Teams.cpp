/*
* author: marjanhasan
* created: 2024-07-13 12:26:46
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
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i], a[i] += k;
        if(a[i] <= 5) cnt++;
    }
    cout << cnt / 3 << nl;
    return 0;
}