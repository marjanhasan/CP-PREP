/*
 * author: marjanhasan
 * created: 2024-07-06 13:14:49
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
    vector<int> a(n);
    map<int,int> mp;
    for(int i = 0; i < n; i++)
        cin >> a[i],mp[a[i]]++;
    // int ele;
    // for(auto val:mp)
    // {
    //     if(val.second == 1) ele = val.first;
    // }
    for(int i = 0; i < n; i++)
    {
        // if(ele == a[i])
        // {
        //     cout << i + 1 << nl;
        //     break;
        // }
        if(mp[a[i]] == 1)
        {
            cout << i + 1 << nl;
            break;
        }
    }
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