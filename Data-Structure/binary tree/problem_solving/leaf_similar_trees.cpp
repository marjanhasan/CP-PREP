class Solution
{
public:
    void traverse(TreeNode *root, vector<int> &v)
    {
        if (!root)
            return;
        if (!root->left && !root->right)
            v.push_back(root->val);
        traverse(root->left, v);
        traverse(root->right, v);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> v, v2;
        traverse(root1, v);
        traverse(root2, v2);
        return v == v2;
    }
};

// another way

class Solution
{
public:
    vector<int> v, v2;
    void traverse1(TreeNode *root)
    {
        if (!root)
            return;
        if (!root->left && !root->right)
            v.push_back(root->val);
        traverse1(root->left);
        traverse1(root->right);
    }
    void traverse2(TreeNode *root)
    {
        if (!root)
            return;
        if (!root->left && !root->right)
            v2.push_back(root->val);
        traverse2(root->left);
        traverse2(root->right);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        traverse1(root1);
        traverse2(root2);
        return v == v2;
    }
};