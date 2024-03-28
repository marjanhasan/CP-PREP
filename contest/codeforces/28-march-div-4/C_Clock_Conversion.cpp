/*
 * author: saifabrar
 * created: 2024-03-28 21:10:38
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
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
        if (s[0] == '0')
        {
            if (s[1] == '0')
                cout << "12:" << s[3] << s[4] << " "
                     << "AM";
            else
                cout << "0" << s[1] << ':' << s[3] << s[4] << " "
                     << "AM";
        }
        else if (s[0] == '1')
        {
            if (s[1] == '0' || s[1] == '1')
                cout << s << " "
                     << "AM";
            else if (s[1] == '2')
                cout << s << " "
                     << "PM";
            else
                cout << "0" << s[1] - '2' << ":" << s[3] << s[4] << " "
                     << "PM";
        }
        else if (s[0] == '2')
        {
            if (s[1] == '0')
                cout << "08:" << s[3] << s[4] << " "
                     << "PM";
            else if (s[1] == '1')
                cout << "09:" << s[3] << s[4] << " "
                     << "PM";
            else if (s[1] == '2')
                cout << "10:" << s[3] << s[4] << " "
                     << "PM";
            else if (s[1] == '3')
                cout << "11:" << s[3] << s[4] << " "
                     << "PM";
        }
        cout << nl;
    }
    return 0;
}