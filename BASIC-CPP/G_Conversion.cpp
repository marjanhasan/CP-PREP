#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c == ',')
            cout << " ";
        else if (islower(c))
        {
            // c = toupper(c);
            c = s[i] - 32; // do same as above line
            cout << c;
        }
        else if (isupper(c))
        {
            // c = tolower(c);
            c = s[i] + 32; // do same as above line
            cout << c;
        }
    }
    return 0;
}
