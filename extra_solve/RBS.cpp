#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        bool flag = true;
        for (char c : s)
        {
            if (c == '(')
                st.push(c);
            else
            {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        flag ? cout << "Possible" : cout << "Impossible";
        cout << nl;
    }
    return 0;
}