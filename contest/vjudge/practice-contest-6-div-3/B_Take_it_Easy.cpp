/*
 * author: saifabrar
 * created: 2024-05-05 21:20:44
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
    vector<int> a(n);
    int sum = 0;
    bool even = false,odd = false;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i] & 1)
            odd = true;
        else 
            even = true;
    }
    if((even && odd) || sum % n)
        cout<<"No"<<nl;
    else
    {
        if((sum / n) & 1 && odd)
            cout<<"Yes"<<nl;
        else if(!((sum/n)&1) && even)
            cout<<"Yes"<<nl;
        else
            cout<<"No"<<nl;
    }
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