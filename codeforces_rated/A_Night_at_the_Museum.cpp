#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    char x = 'a';
    for (char c : s)
    {
        sum += min(abs(c - x), 26 - abs(c - x));
        x = c;
    }
    cout << sum << endl;
    return 0;
}
