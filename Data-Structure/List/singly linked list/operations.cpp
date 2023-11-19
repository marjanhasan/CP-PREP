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
void insert_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = newNode;
}
void print_list(Node *head)
{
    cout << "\n-->Your linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void insert_pos(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid index" << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void delete_pos(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid index" << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << "Invalid index" << endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "Head is not available" << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
int main()
{
    Node *head = NULL;
    cout << "Insert an op" << endl;
    while (true)
    {
        cout << "Insert at tail op:1" << endl;
        cout << "Print list op:2" << endl;
        cout << "Insert at pos op:3" << endl;
        cout << "Insert at head op:4" << endl;
        cout << "Delete from pos op:5" << endl;
        cout << "Delete from head op:6" << endl;
        cout << "Break op:7" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_tail(head, v);
        }
        else if (op == 2)
        {
            print_list(head);
        }
        else if (op == 3)
        {
            cout << "Enter pos: " << endl;
            int pos;
            cin >> pos;
            cout << "Enter val: " << endl;
            int val;
            cin >> val;
            if (pos == 0)
                insert_head(head, val);
            else
                insert_pos(head, pos, val);
        }
        else if (op == 4)
        {
            cout << "Enter val: " << endl;
            int val;
            cin >> val;
            insert_head(head, val);
        }
        else if (op == 5)
        {
            cout << "Enter delete pos: " << endl;
            int pos;
            cin >> pos;
            if (pos == 0)
                delete_head(head);
            else
                delete_pos(head, pos);
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}
