long long sum = 0;
void traverse(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    if (root->left)
        sum += root->left->data;
    traverse(root->left);
    traverse(root->right);
}
long long leftSum(BinaryTreeNode<int> *root)
{
    // Write your code here.
    sum = 0;
    traverse(root);
    return sum;
}