class Solution
{
public:
    void traverse(TreeNode *root, TreeNode *&tmp, int &mn)
    {
        if (!root)
            return;
        traverse(root->left, tmp, mn);
        if (tmp)
            mn = min(mn, abs(root->val - tmp->val));
        tmp = root;
        traverse(root->right, tmp, mn);
    }
    int getMinimumDifference(TreeNode *root)
    {
        TreeNode *tmp = NULL;
        int mn = INT_MAX;
        traverse(root, tmp, mn);
        return mn;
    }
};