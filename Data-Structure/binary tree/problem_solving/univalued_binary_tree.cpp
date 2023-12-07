class Solution
{
public:
    bool isUnivalTree(TreeNode *root)
    {
        if (!root)
            return true;
        if (root->left && root->left->val != root->val)
            return false;
        if (root->right && root->right->val != root->val)
            return false;
        return isUnivalTree(root->left) && isUnivalTree(root->right);
    }
};

// another way
class Solution
{
public:
    int val;
    bool traverse(TreeNode *root)
    {
        if (root == NULL)
            return true;
        if (root->val != val)
            return false;
        return traverse(root->left) && traverse(root->right);
    }
    bool isUnivalTree(TreeNode *root)
    {
        val = root->val;
        return traverse(root);
    }
};