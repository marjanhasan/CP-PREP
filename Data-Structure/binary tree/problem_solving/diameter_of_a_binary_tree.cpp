int mx;
int maxLength(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int left = maxLength(root->left);
    int right = maxLength(root->right);
    mx = max(mx, left + right);
    return max(left, right) + 1;
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    // Write Your Code Here.
    mx = 0;
    int left = maxLength(root->left);
    int right = maxLength(root->right);
    return max(mx, left + right);
}
