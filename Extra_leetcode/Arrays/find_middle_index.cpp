class Solution
{
public:
    int findMiddleIndex(vector<int> &nums)
    {
        int sum, tmp;
        sum = tmp = 0;
        for (int v : nums)
            sum += v;
        for (int i = 0; i < nums.size(); i++)
        {
            sum -= nums[i];
            if (sum == tmp)
                return i;
            tmp += nums[i];
        }
        return -1;
    }
};

/*
// another way
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> left,right;
        int sum = 0;
        for(int v:nums)
        {
            left.push_back(sum);
            sum +=v;
        }
        sum = 0;
        for(int i = nums.size()-1; i >= 0; i--)
        {
            right.push_back(sum);
            sum += nums[i];
        }
        reverse(right.begin(),right.end());
        for(int i = 0;i < left.size();i++)
        {
            if(left[i]==right[i]) return i;
        }
        return -1;
    }
};
*/