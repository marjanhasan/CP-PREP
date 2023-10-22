#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> ss;
        unordered_map<char, int> st;
        for (int i = 0; i < s.size(); i++)
        {
            ss[s[i]]++;
            st[t[i]]++;
        }
        for (int i = 0; i < ss.size(); i++)
        {
            if (ss[i] != st[i])
                return false;
        }
        return true;
    }
};
// another way
class Solution2
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != t[i])
                return false;
        }
        return true;
    }
};
int main()
{

    return 0;
}
