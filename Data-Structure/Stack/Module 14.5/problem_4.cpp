/* Take a queue of size N as input. You need to copy those elements in
 another queue in reverse order. You might use stack here. You should use
  STL to solve this problem. After copying in another queue, print the
   elements of that queue.
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    queue<int> q;
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
/*
Note: if we want to reverse a queue then
copy it to another stack by removing every elements from it
then do same thing from that stack to the queue
and print it
*/