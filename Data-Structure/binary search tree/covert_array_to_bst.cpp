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

Node *convert(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;

    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);

    Node *leftNode = convert(a, n, l, mid - 1);
    Node *rightNode = convert(a, n, mid + 1, r);

    root->left = leftNode;
    root->right = rightNode;

    return root;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Node *root = convert(a, n, 0, n - 1);
    level_order(root);
    return 0;
}
