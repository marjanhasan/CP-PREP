#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sumA = 0, sumB = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i < 3)
            {
                sumA += (s[i] - '0');
            }
            else
                sumB += (s[i] - '0');
        }
        sumA == sumB ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
