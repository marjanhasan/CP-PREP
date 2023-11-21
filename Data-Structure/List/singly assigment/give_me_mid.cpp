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

void dsc(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
                swap(i->val, j->val);
        }
    }
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
    dsc(head);
    int sz = size(head);
    int mid = (sz + 1) / 2;
    Node *tmp = head;
    for (int i = 1; i <= mid - 1; i++)
        tmp = tmp->next;
    if (sz % 2 == 0)
        cout << tmp->val << " " << tmp->next->val;
    else
        cout << tmp->val;
    return 0;
}
