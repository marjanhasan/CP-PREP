#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
bool isSame(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    while (tmp1 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            return false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return true;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert(head1, tail1, val);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert(head2, tail2, val);
    }
    if (size(head1) == size(head2))
    {
        isSame(head1, head2) ? cout << "YES" : cout << "NO";
    }
    else
        cout << "NO";
    return 0;
}
