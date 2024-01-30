#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    int mx = 0;
    string a;
    for (int i = 0; i < n - 1; i++)
    {
        a = "";
        a += s[i];
        a += s[i + 1];
        mp[a]++;
        mx = max(mx, mp[a]);
    }
    for (auto x : mp)
    {
        if (x.second == mx)
        {
            cout << x.first;
            break;
        }
    }
    return 0;
}