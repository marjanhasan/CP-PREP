#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pii> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back({x, i});
        }
        sort(v.begin(), v.end());
        if (v[n - 2].second > v[n - 1].second)
            cout << v[n - 1].second << " " << v[n - 2].second << nl;
        else
            cout << v[n - 2].second << " " << v[n - 1].second << nl;
    }
    return 0;
}