class Solution
{
public:
    TreeNode *convert(vector<int> a, int l, int r)
    {
        if (l > r)
            return NULL;
        int mid = (l + r) / 2;
        TreeNode *root = new TreeNode(a[mid]);
        TreeNode *leftNode = convert(a, l, mid - 1);
        TreeNode *rightNode = convert(a, mid + 1, r);

        root->left = leftNode;
        root->right = rightNode;

        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        TreeNode *root = convert(nums, 0, nums.size() - 1);
        return root;
    }
};