class Solution
{
public:
    int t = 0;
    int tilt(TreeNode *root)
    {
        if (!root)
            return 0;
        int l = tilt(root->left);
        int r = tilt(root->right);
        t += abs(l - r);
        return l + r + root->val;
    }
    int findTilt(TreeNode *root)
    {
        if (!root)
            return 0;
        int l = tilt(root->left);
        int r = tilt(root->right);
        t += abs(l - r);
        return t;
    }
};