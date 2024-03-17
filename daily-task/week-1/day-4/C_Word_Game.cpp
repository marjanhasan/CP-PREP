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
        map<string, int> mp;
        vector<string> v;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                v.push_back(s);
                mp[s]++;
            }
        }
        int cnt = 0, j = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (j == n)
            {
                cout << cnt << " ";
                j = 0;
                cnt = 0;
            }
            if (mp[v[i]] == 1)
                cnt += 3;
            else if (mp[v[i]] < n)
                cnt++;
            j++;
        }
        cout << nl;
    }
    return 0;
}