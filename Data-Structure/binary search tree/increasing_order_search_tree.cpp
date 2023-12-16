class Solution
{
public:
    TreeNode *head = NULL, *tail = NULL;
    void insert(int val)
    {
        TreeNode *newNode = new TreeNode(val, NULL, NULL);
        if (!head)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->right = newNode;
        tail = newNode;
    }
    void traverse(TreeNode *root)
    {
        if (!root)
            return;
        traverse(root->left);
        insert(root->val);
        traverse(root->right);
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        traverse(root);
        return head;
    }
};