#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char c[n];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (st.empty())
                st.push(c[i]);
            else if (st.top() != c[i])
            {
                if ((c[i] == 'R' && st.top() == 'B') || (c[i] == 'B' && st.top() == 'R'))
                {
                    st.pop();
                    st.push('P');
                }
                else if ((c[i] == 'R' && st.top() == 'G') || (c[i] == 'G' && st.top() == 'R'))
                {
                    st.pop();
                    st.push('Y');
                }
                else if ((c[i] == 'B' && st.top() == 'G') || (c[i] == 'G' && st.top() == 'B'))
                {
                    st.pop();
                    st.push('C');
                }
                else
                    st.push(c[i]);
            }
            else
                st.pop();
        }
        stack<char> st2;
        while (!st.empty())
        {
            if (st2.empty())
                st2.push(st.top());
            else
            {
                if (st2.top() == st.top())
                    st2.pop();
                else
                    st2.push(st.top());
            }
            st.pop();
        }
        while (!st2.empty())
        {
            cout << st2.top();
            st2.pop();
        }
        cout << endl;
    }
}