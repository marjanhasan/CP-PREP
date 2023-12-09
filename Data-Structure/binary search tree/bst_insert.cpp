#include <bits/stdc++.h>
using namespace std;
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
        Node *p = q.front();
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

        p->left = left;
        p->right = right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void level_order(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->val << " ";

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    cout << endl;
}

void insert_bst(Node *root, int x)
{
    if (!root)
    {
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL)
            root->left = new Node(x);
        else
            insert_bst(root->left, x);
    }
    else if (x > root->val)
    {
        if (root->right == NULL)
            root->right = new Node(x);
        else
            insert_bst(root->right, x);
    }
}
int main()
{
    Node *root = input_tree();
    insert_bst(root, 9);
    insert_bst(root, 11);
    insert_bst(root, 1);
    insert_bst(root, 20);
    insert_bst(root, 13);
    level_order(root);
    return 0;
}
