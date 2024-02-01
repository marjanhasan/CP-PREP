#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int i = 0;
    bool flag = true;
    while (i < s.size())
    {
        if (i + 2 < s.size() && s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
            i += 3;
        else if (i + 1 < s.size() && s[i] == '1' && s[i + 1] == '4')
            i += 2;
        else if (i < s.size() && s[i] == '1')
            i++;
        else
        {
            flag = false;
            break;
        }
    }
    /* for (int i = 0; i < s.size(); i += 3)
        cout << s[i] << " "; */
    flag ? cout << "YES" : cout << "NO";
    cout << nl;
    return 0;
}