/*
* author: saifabrar
* created: 2024-05-13 13:49:03
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
void sieve(ll n, vector<bool> &prime)
{
    for(ll i = 2; i * i <= n; i++)
    {
        if(prime[i])
        {
            for(ll j = i + i; j <= n; j += i)
                prime[j] = false;
        }
    }
}
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    int n; 
    cin >> n;
    vector<bool> prime(n + 1, true);
    sieve(n,prime);
    cout << ( prime[n] ? "Prime" : "Not Prime") << nl;
    return 0;
}