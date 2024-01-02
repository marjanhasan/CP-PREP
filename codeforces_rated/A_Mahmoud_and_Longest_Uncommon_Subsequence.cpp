#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2)
        cout << -1;
    else
    {
        if (s1.size() > s2.size())
            cout << s1.size();
        else
            cout << s2.size();
    }
    return 0;
}