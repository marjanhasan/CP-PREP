class Solution
{
public:
    vector<int> v;
    void traverse(TreeNode *root)
    {
        if (!root)
            return;
        traverse(root->left);
        v.push_back(root->val);
        traverse(root->right);
    }
    bool findTarget(TreeNode *root, int k)
    {
        traverse(root);
        int l = 0, r = v.size() - 1;
        while (l < r)
        {
            if (v[l] + v[r] == k)
                return true;
            if (v[l] + v[r] < k)
                l++;
            else
                r--;
        }
        return false;
    }
};