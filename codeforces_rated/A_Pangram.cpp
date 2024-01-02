#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if (n < 26)
    {
        cout << "NO";
        return 0;
    }
    string s;
    cin >> s;
    int fre[26] = {0};
    for (char a : s)
    {
        fre[tolower(a) - 'a']++;
    }
    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] == 0)
        {
            flag = false;
            break;
        }
    }
    flag ? cout << "YES" : cout << "NO";
    return 0;
}