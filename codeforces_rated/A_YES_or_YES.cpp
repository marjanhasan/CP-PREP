/*
 * author: marjanhasan
 * created: 2024-07-02 21:50:38
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    string s;
    cin >> s;
    for (auto &c : s)
      c = tolower(c);
    if(s == "yes") 
    cout << "YES";
    else cout << "NO";
    cout << nl;
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