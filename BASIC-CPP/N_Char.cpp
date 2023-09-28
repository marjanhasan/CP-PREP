#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (isupper(ch))
        ch = tolower(ch);
    else
        ch = toupper(ch);
    cout << ch;
    return 0;
}
/*
second way
if (ch >= 'a' && ch <= 'z')
{
    char ans = ch - 32;
    cout << ans;
}
else
{
    char ans = ch + 32;
    cout << ans;
}
*/