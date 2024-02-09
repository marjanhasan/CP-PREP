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
    bool flag = true;
    int L, R;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
            continue;
        else if (s[i] == '(')
        {
            L = i + 1;
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                flag = false;
                break;
            }
            else if (s[i] == ')' && st.top() == '(')
            {
                R = i + 1;
                st.pop();
                break;
            }
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (flag && st.empty())
        {
            if (l <= L && r >= R)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "NO";
        cout << nl;
    }
    return 0;
}