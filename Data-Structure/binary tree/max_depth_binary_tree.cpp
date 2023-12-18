/* class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        queue<pair<TreeNode *, int>> q;
        q.push({root, 1});
        int depth = 0;
        while (!q.empty())
        {
            pair<TreeNode *, int> pr = q.front();
            q.pop();
            TreeNode *node = pr.first;
            int level = pr.second;
            depth = max(depth, level);
            if (node->left)
                q.push({node->left, level + 1});
            if (node->right)
                q.push({node->right, level + 1});
        }
        return depth;
    }
}; */

// preffered
class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return max(left, right) + 1;
    }
};