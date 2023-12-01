#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s)
        {
            if (st.empty())
                st.push(c);
            else if (c == 'A' && st.top() == 'A')
                st.push(c);
            else if (c == 'B' && st.top() == 'B')
                st.push(c);
            else
                st.pop();
        }
        st.empty() ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}