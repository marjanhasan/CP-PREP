#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int sz = s.size();
        for (int i = sz - 1; i >= 0; i--)
            cout << s[i] << ' ';
        cout << endl;
    }

    return 0;
}
