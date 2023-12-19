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
        int cnt = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            int val = (s[i] - 'A') + 1;
            if (val < n)
                n -= val;
            else
                continue;
            if (n <= 0)
                break;
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
