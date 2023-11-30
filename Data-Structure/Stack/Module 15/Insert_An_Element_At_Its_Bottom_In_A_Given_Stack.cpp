#include <bits/stdc++.h>
using namespace std;
stack<int> pushAtBottom(stack<int> &st, int x)
{
    // Write your code here.
    stack<int> st1;
    while (!st.empty())
    {
        st1.push(st.top());
        st.pop();
    }
    st1.push(x);
    while (!st1.empty())
    {
        st.push(st1.top());
        st1.pop();
    }
    return st;
}
int main()
{
    return 0;
}