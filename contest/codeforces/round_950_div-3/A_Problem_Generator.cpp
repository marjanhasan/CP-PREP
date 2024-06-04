/*
 * author: saifabrar
 * created: 2024-06-03 20:37:08
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, m, cnt = 0;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> fre(7,0);
    for(char c:s)
        fre[c - 'A']++;
    for(int v : fre)
    {
        if(v < m) 
            cnt += (m-v);
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