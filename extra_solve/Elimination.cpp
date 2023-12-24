#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (st.empty())
                st.push(c);
            else if (st.top() == '0' && c == '1')
                st.pop();
            else
                st.push(c);
        }
        st.empty() ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
