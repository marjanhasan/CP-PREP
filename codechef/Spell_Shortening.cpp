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
        string s;
        cin >> s;
        string ans, mn, srt;
        ans = mn = srt = s;
        for (int i = 0; i < n; i++)
        {
            ans.erase(ans.begin() + i);
            mn = min(mn, ans);
            ans = s;
        }
        cout << mn << nl;
    }
    return 0;
}