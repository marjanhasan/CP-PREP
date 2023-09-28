#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        isupper(c) ? cout << "ALPHA\nIS CAPITAL" : cout << "ALPHA\nIS SMALL";
    }
    else
        cout << "IS DIGIT";
    return 0;
}
