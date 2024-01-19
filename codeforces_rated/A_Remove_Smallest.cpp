#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
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
        vector<int> v(n);
        for (auto &it : v)
            cin >> it;
        sort(v.begin(), v.end());
        bool flag = true;
        for (int i = 1; i < n; i++)
            flag &= (v[i] - v[i - 1] <= 1);
        flag ? cout << "YES" : cout << "NO";
        cout << nl;
    }
    return 0;
}