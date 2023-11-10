#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        // map<int,int>mp;
        // int ans=0;
        // for(int i=0;i<nums.size();i++)
        //     mp[nums[i]]++;
        // for(auto it:mp)
        //     ans+=(it.second*(it.second-1))/2;
        // return ans;
        int ans = 0, sz = nums.size();
        for (int i = 0; i < sz - 1; i++)
        {
            for (int j = i + 1; j < sz; j++)
            {
                if (nums[i] == nums[j])
                    ans++;
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}
