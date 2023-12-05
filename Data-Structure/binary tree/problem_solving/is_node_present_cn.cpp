/*
1. first way

bool flag;
void traverse(BinaryTreeNode<int> *root, int x)
{
    if(root == NULL) return;
    if(root->data == x)
    {
        flag = true;
        return;
    }
    traverse(root->left, x);
    traverse(root->right,x);
}
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    flag = false;
    traverse(root, x);
    return flag;
}
*/

/*
2. second way

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    if(root == NULL) return false;
    if(root->data == x) return true;
    bool left = isNodePresent(root->left, x);
    bool right = isNodePresent(root->right, x);
    return left || right;
}
*/