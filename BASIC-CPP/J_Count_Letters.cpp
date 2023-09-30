
// first way
// using frequency array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt[26] = {0}, n = s.size();

    for (int i = 0; i < n; i++)
        cnt[s[i] - 'a']++;

    for (int i = 0; i < 26; i++)
    {
        char ch = i + 'a';
        if (cnt[i] != 0)
            cout << ch << " : " << cnt[i] << endl;
    }
    return 0;
}

/*
// second way
// Frequency with EOF

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cnt[26] = {0};
    char ch;
    while (cin >> ch) // EOF
    {
        cnt[ch - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (cnt[i - 'a'] != 0)
            cout << i << " : " << cnt[i - 'a'] << endl;
    }

    return 0;
}

*/

/*
// third way

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        int cnt = 1;
        while (s[i] == s[++i])
        {
            cnt++;
        }
        i--;
        cout << c << " : " << cnt << endl;
    }
}


*/