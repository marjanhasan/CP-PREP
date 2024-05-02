/*
 * author: saifabrar
 * created: 2024-05-02 20:47:54
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int findy( int x)
{
    int y = x - 1;
    while(y>=1)
    {
        if(__gcd(x,y) + y == x)
            return y;
        y -= 1;
    }
}
void solve()
{
    int x;cin>>x;
    cout<<findy(x)<<nl;
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