#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char> a;
    char x;
    while (cin >> x)
    {
        if (isalpha(x))
            a.insert(x);
    }
    cout << a.size();
    return 0;
}
