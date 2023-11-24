#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        string s, x;
        cin >> s >> x;

        while (s.find(x) != -1)
        {
            s.replace(s.find(x), x.size(), "#");
        }
        cout << s << endl;
    }

    return 0;
}
/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            bool flag = true;
            if (s[i] == x[j])
            {
                int k = i;
                for (int j = 0; j < x.size(); j++)
                {
                    if (s[k] != x[j])
                    {
                        flag = false;
                        break;
                    }
                    k++;
                }
                if (flag)
                    s.replace(i, x.size(), "#");
            }
        }
        cout << s << endl;
    }
    return 0;
}
 */