/*
* author: saifabrar
* created: 2024-05-11 12:33:59
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
    vector<int> a,b;

    //  o(n)
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            b.push_back(i);
    }
    for(int i:b)
        cout<<i<<" ";
    cout<<nl; 


    // o(sqrt(n))
    for(int i = 1;i * i <= n;i++) // i <= sqrt(n) is same
    {
        if(n % i == 0)
        {
            a.push_back(i);
            if(n / i != i)
                a.push_back(n / i);
        }
    }
    sort(a.begin(),a.end());
    for(int v:a)
        cout << v << " ";
    return 0;
}