#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *left, *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        f->left = left;
        f->right = right;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void inorder(Node *root, bool left, bool right)
{
    if (!root)
        return;
    inorder(root->left, true, false);
    if (left || right)
        cout << root->val << " ";
    inorder(root->right, false, true);
}
void left_sub_tree(Node *root)
{
    if (!root)
        return;
    if (root->left)
        left_sub_tree(root->left);
    else
        left_sub_tree(root->right);
    cout << root->val << " ";
}
void right_sub_tree(Node *root)
{
    if (!root)
        return;
    cout << root->val << " ";
    if (root->right)
        right_sub_tree(root->right);
    else
        right_sub_tree(root->left);
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    Node *root = input_tree();
    if (root->left)
        left_sub_tree(root->left);
    if (root)
        cout << root->val << " ";
    if (root->right)
        right_sub_tree(root->right);
    return 0;
}