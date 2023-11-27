#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    stack<int> st;
    st.push(10);
    st.push(20); // insert at tail
    cout << st.top() << endl;
    st.pop();                   // remove tail
    cout << st.top() << endl;   // return last value
    cout << st.size() << endl;  // return size
    cout << st.empty() << endl; // return true/false 0/1
    */
    // input
    int n;
    cin >> n;
    stack<int> st;
    while (n--)
    {
        int v;
        cin >> v;
        st.push(v);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
