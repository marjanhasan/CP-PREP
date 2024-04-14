#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &q)
    {
        vector<int> pre;
        pre.push_back(arr[0]);
        for (int i = 1; i < arr.size(); i++)
            pre.push_back(pre[i - 1] ^ arr[i]);

        vector<int> ans;
        for (int i = 0; i < q.size(); i++)
        {
            int l, r;
            l = q[i][0];
            r = q[i][1];
            if (l == 0)
                ans.push_back(pre[r]);
            else
                ans.push_back(pre[r] ^ pre[l - 1]);
        }
        return ans;
    }
};
int main()
{

    return 0;
}
