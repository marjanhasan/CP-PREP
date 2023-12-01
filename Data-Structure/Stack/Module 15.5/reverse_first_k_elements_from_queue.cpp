#include <bits/stdc++.h>
using namespace std;
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    stack<int> st;
    for (int i = 1; i <= k; i++)
    {
        st.push(q.front());
        q.pop();
    }
    queue<int> nq;
    while (!q.empty())
    {
        nq.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while (!nq.empty())
    {
        q.push(nq.front());
        nq.pop();
    }
    return q;
}
int main()
{

    return 0;
}
