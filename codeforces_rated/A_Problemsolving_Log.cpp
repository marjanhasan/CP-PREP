#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt[26] = {0};
        for (char c : s)
            cnt[c - 'A']++;
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] > i)
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
