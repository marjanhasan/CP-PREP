vector<int> v;
void traverse(TreeNode<int> *root)
{
    if (root == NULL)
        return;
    v.push_back(root->data);
    traverse(root->left);
    traverse(root->right);
}
vector<int> preOrder(TreeNode<int> *root)
{
    // Write your code here.
    v.clear();
    traverse(root);
    return v;
}