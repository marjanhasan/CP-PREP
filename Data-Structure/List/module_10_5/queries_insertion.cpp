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
    newNode->prev = tail;
    tail = newNode;
}
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_pos(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
        tmp = tmp->next;
    newNode->next = tmp->next;
    tmp->next = newNode;

    newNode->next->prev = newNode;
    newNode->prev = tmp;
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
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q, pos, val;
    cin >> q;
    while (q--)
    {
        cin >> pos >> val;
        if (pos == 0)
        {
            insert_head(head, tail, val);
            print(head);
            print_reverse(tail);
        }
        else if (pos == size(head))
        {
            insert_tail(head, tail, val);
            print(head);
            print_reverse(tail);
        }
        else if (pos > 0 && pos < size(head))
        {
            insert_pos(head, tail, pos, val);
            print(head);
            print_reverse(tail);
        }
        else
            cout << "Invalid\n";
    }

    return 0;
}
