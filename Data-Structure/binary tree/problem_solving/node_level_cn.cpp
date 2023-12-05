int nodeLevel(TreeNode<int> *root, int x)
{
    // Write your code here.
    if (root == NULL)
        return 0;
    queue<pair<TreeNode<int> *, int>> q;
    q.push({root, 1});
    while (!q.empty())
    {
        pair<TreeNode<int> *, int> pr = q.front();
        q.pop();
        TreeNode<int> *node = pr.first;
        int level = pr.second;

        if (node->val == x)
            return level;

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
}