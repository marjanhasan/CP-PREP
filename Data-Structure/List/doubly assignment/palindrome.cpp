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

void insert_tail(Node *&head, Node *&tail, int val)
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

void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

int main()
{
    // Write your code here
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
        insert_tail(head1, tail1, val);
    }
    reverse(head1, head1);
    Node *tmp = head;
    Node *tmp1 = head1;
    bool flag = false;
    while (tmp != NULL)
    {
        if (tmp->val != tmp1->val)
        {
            flag = true;
            break;
        }
        tmp = tmp->next;
        tmp1 = tmp1->next;
    }
    !flag ? cout << "YES" : cout << "NO";
    return 0;
}