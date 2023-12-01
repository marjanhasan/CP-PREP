#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO";
        return 0;
    }
    int val;
    stack<int> st;
    while (n--)
    {
        cin >> val;
        st.push(val);
    }

    queue<int> q;
    while (m--)
    {
        cin >> val;
        q.push(val);
    }
    bool flag = false;
    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            flag = true;
            break;
        }
        st.pop();
        q.pop();
    }

    flag ? cout << "NO" : cout << "YES";
    return 0;
}