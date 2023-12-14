/*
class Solution {
public:
    int sum;
    void traverse(TreeNode* root,int low,int high)
    {
        if(!root) return;
        if(root->val >= low && root->val <= high) sum+=root->val;
        traverse(root->left,low,high);
        traverse(root->right,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        sum = 0;
        traverse(root,low,high);
        return sum;
    }
};
*/

class Solution
{
public:
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        if (!root)
            return 0;
        if (root->val >= low && root->val <= high)
            return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
        else if (root->val > low)
            return rangeSumBST(root->left, low, high);
        else
            return rangeSumBST(root->right, low, high);
    }
};