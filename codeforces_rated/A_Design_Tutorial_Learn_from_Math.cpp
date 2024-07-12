/*
* author: marjanhasan
* created: 2024-07-12 15:43:19
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
    (n % 2 == 0) ? cout << 4 << " " << n - 4 << nl : cout << 9 << " " << n - 9 << nl;
    return 0;
}