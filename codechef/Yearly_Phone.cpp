#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    cout << "K" << s[s.size() - 2] << s[s.size() - 1];
    return 0;
}