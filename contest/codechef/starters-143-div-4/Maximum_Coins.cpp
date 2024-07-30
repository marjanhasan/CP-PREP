/*
 * author: marjanhasan
 * created: 2024-07-17 20:31:54
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int arr[11] = {0,2,4,8,16,32,64,128,256,512,1024};
    int x, n;
    cin >> n >> x;
    
    int chef = 0, chefina = 0;
    for(int i = 1; i <= n - x; i++)
        chefina += arr[i];
    for(int i = n - x + 1; i <= n; i++)
        chef += arr[i];
    cout << abs(chef - chefina) << nl;
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
