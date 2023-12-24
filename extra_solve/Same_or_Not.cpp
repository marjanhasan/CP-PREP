#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO";
        return 0;
    }
    stack<int> st;
    queue<int> q;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool flag = true;
    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            flag = false;
            break;
        }
        st.pop();
        q.pop();
    }
    flag ? cout << "YES" : cout << "NO";

    return 0;
}
