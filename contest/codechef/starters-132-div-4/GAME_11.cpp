/*
 * author: saifabrar
 * created: 2024-05-01 20:37:04
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    if (a.size() < 4 || b.size() < 4 || n+m < 11)
    {
        cout << -1 << nl;
        return;
    }
    ll sum = 0, cnt = 0;
    int i;
    for (i = 0; i < 4; i++)
    {
        sum += a[i];
        sum += b[i];
        cnt += 2;
    }
    vector<ll> dup;
    while (cnt < 11)
    {
        /* code */
        if (i < n)
            dup.push_back(a[i]);
        if (i < m)
            dup.push_back(b[i]);
        cnt++;
        i++;
    }
    sort(dup.rbegin(),dup.rend());
    for(int j=0;j<3;j++)
        sum+=dup[j];

    cout << sum << nl;
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