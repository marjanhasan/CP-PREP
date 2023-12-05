int heightOfBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int left = heightOfBinaryTree(root->left);
    int right = heightOfBinaryTree(root->right);
    return max(left, right) + 1;
}