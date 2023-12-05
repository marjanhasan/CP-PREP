int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    // Write your code here.
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int left = noOfLeafNodes(root->left);
    int right = noOfLeafNodes(root->right);
    return left + right;
}