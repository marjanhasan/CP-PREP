/*
 * author: saifabrar
 * created: 2024-04-24 20:34:29
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n,x,y;cin>>n>>x>>y;
    vector<int> a(n);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum += min(a[i]*x,y);
    }
    cout<<sum<<nl;
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