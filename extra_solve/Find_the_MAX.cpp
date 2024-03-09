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
    set<int, greater<int>> s;
    map<int, int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int v;
            cin >> v;
            s.insert(v);
            mp[v]++;
        }
        else
        {
            if (s.empty())
                cout << "empty" << nl;
            else
            {
                cout << *s.begin() << nl;
                s.erase(s.begin());
            }
        }
    }
    return 0;
}