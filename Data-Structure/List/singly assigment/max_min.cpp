#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    // Write your code here
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert(head, tail, val);
    }
    int mn = INT_MAX, mx = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val > mx)
            mx = tmp->val;
        if (tmp->val < mn)
            mn = tmp->val;
        tmp = tmp->next;
    }
    cout << mx << " " << mn;
    return 0;
}