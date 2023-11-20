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

// ******* optimal O(1)
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
//**********not optimal O(N)
// void insert_tail(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     Node *tmp = head;
//     while (tmp->next != NULL)
//         tmp = tmp->next;

//     tmp->next = newNode;
// }
void print_list(Node *head)
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
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    print_list(head);
    return 0;
}
