#include <bits/stdc++.h>

bool isSpecialBinaryTree(BinaryTreeNode<int> *root)
{
    // Write your code here.
    if (root->left == NULL && root->right == NULL)
        return true;
    if (root->left == NULL || root->right == NULL)
        return false;
    if (root->left && root->right)
    {
        bool left = isSpecialBinaryTree(root->left);
        bool right = isSpecialBinaryTree(root->right);
        return left && right;
    }
}