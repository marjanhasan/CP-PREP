/*
* author: saifabrar
* created: 2024-05-13 13:38:37
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
void sieve(ll n, vector<bool> &prime, vector<ll> &all_primes)
{
    for(ll i = 2; i * i <= n; i++)
    {
        if(prime[i])
        {
            for(ll j = i + i; j <= n; j += i)
                prime[j] = false;
        }
    }
    for(ll i = 2; i <= n; i++)
    {
        if(prime[i])
            all_primes.push_back(i);
    }
}
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    cin >> n;
    vector<bool> prime(n + 1, true);
    vector<ll> all_primes;
    sieve(n,prime,all_primes);
    for(auto val:all_primes)
        cout<<val<<" ";
    return 0;
}