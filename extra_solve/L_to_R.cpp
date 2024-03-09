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

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
            v.push_back(i + 1);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        auto it = lower_bound(v.begin(), v.end(), l);
        int tmp = it - v.begin();
        if (tmp < v.size() && v[tmp] >= l && v[tmp] <= r)
            cout << 0 << nl;
        else
            cout << 1 << nl;
    }
    return 0;
}