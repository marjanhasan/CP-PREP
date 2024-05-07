/*
 * author: saifabrar
 * created: 2024-05-07 21:12:48
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;cin>>n;
    int sum=0,a;
    while(n>0)
    {
        a = n%2;
        n /= 2;
        sum += a;
    }
    cout<<(sum%2==0 ? "EVEN" : "ODD")<<nl;
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