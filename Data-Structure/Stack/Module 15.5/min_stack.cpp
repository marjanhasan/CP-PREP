#include <bits/stdc++.h>
using namespace std;
class minStack
{
    // Write your code here.

public:
    stack<int> st;
    stack<int> mst;
    // Constructor
    minStack()
    {
        // Write your code here.
    }

    // Function to add another element equal to num at the top of stack.
    void push(int num)
    {
        // Write your code here.
        st.push(num);
        if (mst.empty())
            mst.push(num);
        else if (num <= mst.top())
            mst.push(num);
    }

    // Function to remove the top element of the stack.
    int pop()
    {
        // Write your code here.
        if (st.empty())
            return -1;
        int val = st.top();
        st.pop();
        if (val == mst.top())
            mst.pop();
        return val;
    }

    // Function to return the top element of stack if it is present. Otherwise return -1.
    int top()
    {
        // Write your code here.
        if (st.empty())
            return -1;
        return st.top();
    }

    // Function to return minimum element of stack if it is present. Otherwise return -1.
    int getMin()
    {
        // Write your code here.
        if (st.empty())
            return -1;
        return mst.top();
    }
};
int main()
{

    return 0;
}
