#include <bits/stdc++.h>
using namespace std;
string kevinStackProblem(string &s)
{
    // Write your code here.
    stack<char> st;
    for (char c : s)
    {
        st.push(c);
    }
    s = "";

    while (!st.empty())
    {
        s += st.top();
        st.pop();
    }

    return s;
}
int main()
{

    return 0;
}
