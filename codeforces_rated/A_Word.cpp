#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int u, l;
    u = l = 0;
    for (char c : s)
    {
        if (isupper(c))
            u++;
        else
            l++;
    }
    if (l >= u)
    {
        for (char c : s)
        {
            c = tolower(c);
            cout << c;
        }
    }
    else
    {
        for (char c : s)
        {
            c = toupper(c);
            cout << c;
        }
    }

    return 0;
}
