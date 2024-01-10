#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        char c[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> c[i];
        }
        bool flag = false;
        for (int i = 0; i < 6; i++)
        {
            if (c[i] == 'W' && i + 2 < 6)
            {
                if (c[i + 1] == 'W' && c[i + 2] == 'W')
                {
                    flag = true;
                    break;
                }
            }
        }
        flag ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}
