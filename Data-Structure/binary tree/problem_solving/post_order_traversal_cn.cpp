#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
vector<int> v;
void post_order(TreeNode *root)
{
    if (root == NULL)
        return;
    post_order(root->left);
    post_order(root->right);
    v.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
    v.clear();
    post_order(root);
    return v;
}
int main()
{

    return 0;
}
