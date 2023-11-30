#include <bits/stdc++.h>
using namespace std;
/* void reverseStack(stack<int> &s)
{
    // Write your code here
    queue<int> q;
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
} */
void reverseStack(stack<int> &s)
{
    // Write your code here
    if (s.empty())
        return;
    int x = s.top();
    s.pop();
    reverseStack(s);

    stack<int> ns;

    while (!s.empty())
    {
        ns.push(s.top());
        s.pop();
    }           // 3 2 --> 3 2
    ns.push(x); // --> 3 2 1
    while (!ns.empty())
    {
        s.push(ns.top());
        ns.pop();
    }
}
int main()
{

    return 0;
}
