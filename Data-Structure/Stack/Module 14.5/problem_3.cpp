/* Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem. */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<int> st;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    stack<int> st2;
    while (!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }
    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }

    return 0;
}

/* Note: if we assign st1 into st2,
then it will be similar as st1.
but if we remove every element and push to st2,
then we will get another ordered element */
