#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int fre[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        fre[s[i] - 'a']++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] != 0)
            cnt++;
    }
    if (cnt % 2 == 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}
