#include <bits/stdc++.h>
using namespace std;
int main()
{
    string f, s;
    cin >> f >> s;
    for (int i = 0; i < s.size(); i++)
    {
        f[i] = tolower(f[i]);
        s[i] = tolower(s[i]);
    }
    if (f < s)
        cout << "-1";
    else if (s < f)
        cout << "1";
    else
        cout << "0";
    return 0;
}
