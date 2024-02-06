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
        int cnt = 0, si, sj;
        bool flag = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                si = i;
                break;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                sj = i;
                break;
            }
        }
        cout << sj - si + 1 << nl;
    }
    return 0;
}