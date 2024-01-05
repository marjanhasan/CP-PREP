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
    vector<pair<string, int>> v;
    int sz = s.size();
    bool odd = false;
    if (sz % 2 == 1)
        odd = true;
    string con;
    bool flag = false;
    for (int i = 0; i < sz; i += 2)
    {
        con = "";
        con += s[i];
        con += s[i + 1];
        flag = false;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j].first == con)
                v[j].second++;
            flag = true;
        }
        if (!flag)
            v.push_back({con, 1});
    }
    if (odd)
    {
        con = "";
        con += s[n - 2];
        con += s[n - 1];
    }
    flag = false;
    for (int j = 0; j < v.size(); j++)
    {
        if (v[j].first == con)
            v[j].second++;
        flag = true;
    }
    if (!flag)
        v.push_back({con, 1});
    int mx = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (mx < v[i].second)
        {
            con = "";
            con += v[i].first;
            mx = v[i].second;
        }
        // cout << v[i].first << " " << v[i].second << nl;
    }
    cout << con;
    return 0;
}