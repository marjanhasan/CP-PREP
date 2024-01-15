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
        string s, f;
        cin >> s >> f;
        int ache, lagbe, no;
        ache = lagbe = no = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ache++;
            if (s[i] != f[i])
            {
                if (f[i] == '1')
                    lagbe++;
            }
        }
        if (lagbe == 0)
            cout << lagbe << nl;
        else
            cout << max(ache, lagbe) << nl;
    }
    return 0;
}