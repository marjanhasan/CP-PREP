#include <bits/stdc++.h>
using namespace std;
// first way O(N*N)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }
        return {};
    }
};
// second way O(NlogN)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<pair<int, int>> v;
        for (int i = 0; i < nums.size(); i++)
            v.push_back({nums[i], i});
        sort(v.begin(), v.end());
        int i = 0, j = v.size() - 1;
        vector<int> ans;
        while (i < j)
        {
            if (v[i].first + v[j].first == target)
            {
                ans.push_back(v[i].second);
                ans.push_back(v[j].second);
                return ans;
            }
            else if (v[i].first + v[j].first > target)
                j--;
            else
                i++;
        }
        return ans;
    }
};
// third way O(N)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            int val = target - nums[i];
            if (mp.count(val))
                return {mp[val], i};
            mp.insert({nums[i], i});
        }
        return {};
    }
};
int main()
{

    return 0;
}
