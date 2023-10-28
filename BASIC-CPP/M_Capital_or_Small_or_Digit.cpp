#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (islower(c))
        cout << "ALPHA\nIS SMALL";
    else if (isupper(c))
        cout << "ALPHA\nIS CAPITAL";
    else
        cout << "IS DIGIT";
    return 0;
}
