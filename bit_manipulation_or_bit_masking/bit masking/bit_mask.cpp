/*
* author: saifabrar
* created: 2024-04-14 12:14:16
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
    
    int n;cin>>n;

    // (1 << n) == 2^n - 1;
    for(int i=0;i < (1 << n); i++)
    {
        for(int k = 0; k < n; k++)
        {
            if((i >> k) & 1)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout<<nl;
    }
    return 0;
}