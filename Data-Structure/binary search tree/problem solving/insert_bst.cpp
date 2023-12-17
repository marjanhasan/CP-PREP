TreeNode<int> *insertionInBST(TreeNode<int> *root, int val)
{
    // Write your code here.
    if (!root)
    {
        root = new TreeNode<int>(val);
        return root;
    }
    if (root->val > val)
    {
        if (!root->left)
        {
            // TreeNode *newNode = new TreeNode(val);
            root->left = new TreeNode<int>(val);
        }
        else
            insertionInBST(root->left, val);
    }
    if (root->val < val)
    {
        if (!root->right)
        {
            // TreeNode *newNode = new TreeNode(val);
            root->right = new TreeNode<int>(val);
        }
        else
            insertionInBST(root->right, val);
    }
    return root;
}