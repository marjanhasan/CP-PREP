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
    string s;
    cin >> s;
    int i = 0, one = 0, zero = 0;
    while(i < n)
    {
        if(s[i]== '1')
        {
            one++;
            while(s[i] == '1')
                i++;
        }
        else
        {
            zero++;
            while(s[i]=='0')
                i++;
        }
    }
    cout << min(one, zero) << nl;
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