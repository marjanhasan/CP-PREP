class Solution
{
public:
    vector<int> v;
    void traverse(TreeNode *root)
    {
        if (!root)
            return;
        v.push_back(root->val);
        traverse(root->left);
        traverse(root->right);
    }
    int minDiffInBST(TreeNode *root)
    {
        traverse(root);
        int mn = INT_MAX;
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size() - 1; i++)
        {
            int df = abs(v[i] - v[i + 1]);
            if (mn > df)
                mn = df;
        }
        return mn;
    }
};