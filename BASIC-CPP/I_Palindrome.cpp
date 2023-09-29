// first way (two pointers technique)
/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool flag = false;
    int l = 0, r = s.size() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            flag = true;
            break;
        }
        l++;
        r--;
    }
    !flag ? cout << "YES" : cout << "NO";

    return 0;
} */

/*
//another way

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string sw;
    for (int i = s.size() - 1; i >= 0; i--)
        sw += s[i];
    s == sw ? cout << "YES" : cout << "NO";
    return 0;
}
 */

/*
// another way

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sz = s.size();
    for (int i = 0; i < sz / 2; i++)
    {
        if (s[i] != s[sz - 1 - i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES";
    return 0;
} */
