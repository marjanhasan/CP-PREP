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
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        int sw = 0;
        bool flag = true;
        for (char c : s)
        {
            if (c == '0')
            {
                if (sw <= 0)
                {
                    flag = false;
                    break;
                }
                sw--;
            }
            else
                sw = x;
        }
        flag ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}