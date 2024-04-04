/*
* author: saifabrar
* created: 2024-04-03 20:33:45
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
    
    int t;cin>>t;
    while (t--)
    {
        int n,l,r;cin>>n>>l>>r;
        int hap=0;
        int mn=0,mx=0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(l<=a[i] && a[i]<=r)
            {
                hap++;
                mx = max(mx,hap);
            }
            else
            {
                hap--;
                mn=min(mn,hap);
            }
        }
        cout<<mx<<" "<<mn<<nl;
    }
    
    return 0;
}