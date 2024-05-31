/*
 * author: saifabrar
 * created: 2024-05-30 20:36:56
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
    for(int i = 0; i < n - 1; i++)
    {
        if(isalpha(s[i]) && isdigit(s[i + 1]))
        {
            cout << "NO" << nl;
            return;
        }
        else if(isalpha(s[i]) && isalpha(s[i + 1]) && s[i] > s[i + 1])
        {
            cout << "NO" << nl;
            return;
        }
        else if(isdigit(s[i]) && isdigit(s[i + 1]) && s[i] > s[i + 1])
        {
            cout << "NO" << nl;
            return;
        }
    }
    cout << "YES" << nl;
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