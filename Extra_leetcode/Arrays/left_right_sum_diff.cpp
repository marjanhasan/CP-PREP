class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        vector<int> v1, v2, ans;
        int left, right;
        left = right = 0;
        for (int v : nums)
        {
            v1.push_back(left);
            left += v;
        }
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            v2.push_back(right);
            right += nums[i];
        }
        reverse(v2.begin(), v2.end());
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(abs(v1[i] - v2[i]));
        }
        return ans;
    }
};