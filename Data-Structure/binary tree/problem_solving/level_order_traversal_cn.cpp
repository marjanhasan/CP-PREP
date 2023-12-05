vector<int> v;
void traverse(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *p = q.front();
        q.pop();

        v.push_back(p->val);

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    v.clear();
    traverse(root);
    return v;
}