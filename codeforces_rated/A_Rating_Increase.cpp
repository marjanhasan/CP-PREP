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
        string s;
        cin >> s;
        int a, b;
        a = b = 0;
        bool flag = true;
        a = a * 10 + (s[0] - '0');
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '0' && flag)
            {
                a = a * 10 + (s[i] - '0');
            }
            else
            {
                b = b * 10 + (s[i] - '0');
                flag = false;
            }
        }
        a < b ? cout << a << " " << b << nl : cout << -1 << nl;
    }
    return 0;
}