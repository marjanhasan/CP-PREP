#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int sz;
        cin >> sz;
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 0; i < sz - 1; i++)
        {
            if (s[i] == '1' && flag)
            {
                cout << "IDK\n";
            }
            else
            {
                cout << "NO\n";
                flag = false;
            }
        }
        if (s[sz - 1] == '1' && flag)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
