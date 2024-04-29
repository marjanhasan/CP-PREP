/*
 * author: saifabrar
 * created: 2024-04-23 21:04:42
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
    vector<ll> a(n), b(n);
    int cnta = 0, cntb = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            cnt++;
            cnta = max(cnta, cnt);
        }
        else
            cnt = 0;
    }
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] > 0)
        {
            cnt++;
            cntb = max(cntb, cnt);
        }
        else
            cnt = 0;
    }
    if(cnta>cntb) cout<<"Om";
    else if(cnta<cntb) cout<<"Addy";
    else cout<<"Draw";
    cout<<nl;
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