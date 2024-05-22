/*
 * author: saifabrar
 * created: 2024-05-22 20:35:06
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;
    cin >> n;
    vector<char> s(n);
    int one=0,zero=0;
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
        if(s[i]== '1') one++;
        if(s[i]== '0') zero++;
    }
    if(one == n || zero == n)
    {
        cout << 0 << nl;
        return;
    }
    if(one == zero)
    {
        cout << 1 << nl;
        return;
    }
    int cnt = 0;
    if(one < zero)
    {
        int i = 0;
        while( i < n)
        {
            if(s[i]=='0')
            {
                i++;
                continue;
            }
            while(s[i]== '1' && i < n)
                i++;
            cnt++;
        }
    }
    else
    {
        int i = 0;
        while( i < n)
        {
            if(s[i]=='1')
            {
                i++;
                continue;
            }
            while(s[i]== '0' && i < n)
                i++;
            cnt++;
        }
    }
    cout << cnt << nl;
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