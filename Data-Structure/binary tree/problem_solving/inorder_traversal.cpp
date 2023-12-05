vector<int> v;
void traverse(TreeNode *root)
{
    if (root == NULL)
        return;
    traverse(root->left);
    v.push_back(root->data);
    traverse(root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    v.clear();
    traverse(root);
    return v;
}