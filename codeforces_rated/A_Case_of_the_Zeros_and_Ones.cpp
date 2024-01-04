#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;

    stack<char> st;
    for (char c : s)
    {
        if (st.empty())
            st.push(c);
        else if (st.top() != c)
            st.pop();
        else
            st.push(c);
    }
    cout << st.size() << nl;
    return 0;
}