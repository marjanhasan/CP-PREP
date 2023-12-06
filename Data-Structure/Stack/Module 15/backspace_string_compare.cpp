#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> st1, st2;
        for (char c : s)
        {
            if (c == '#')
            {
                if (!st1.empty())
                    st1.pop();
            }
            else
                st1.push(c);
        }
        for (char c : t)
        {
            if (c == '#')
            {
                if (!st2.empty())
                    st2.pop();
            }
            else
                st2.push(c);
        }

        return st1 == st2;
    }
};
/*
// another way

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        for(char c:s)
        {
            if(c == '#' && !st.empty()) st.pop();
            if(c != '#') st.push(c);
        }
        stack<char> tt;
        for(char c:t)
        {
            if(c == '#' && !tt.empty()) tt.pop();
            if(c != '#') tt.push(c);
        }
        return st == tt;
    }
};

*/
int main()
{

    return 0;
}
