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
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        bool flag = true;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second >= 3)
            {
                cout << it->first << nl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "-1" << nl;
    }
    return 0;
}